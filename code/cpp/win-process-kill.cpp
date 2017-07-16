/*
Example for steam games killing, 
but it can kill any application by name and may easy moved to any engine(Because it uses windows commands mostly). 
It isn't kill steam itself(because of ignorelist) and has ignore list
*/
QSrting steamKillIgnore = "steam|htc|nw\.exe|vrmonitor|vrserver|vrdashboard|vrcompositor|vive";

bool recursiveKill(int uid){
    bool killed = false;
    {
        QProcess process;
        QString cmd(tr("cmd /c wmic process where (ParentProcessId=%1) get Caption,ProcessId").arg(uid));
        process.start(cmd);
        process.waitForFinished(-1); // will wait forever until finished
        QByteArray out = process.readAllStandardOutput();

        QRegularExpression reA("[\\w.]+\\.exe\\s+\\d{1,}");

        QRegularExpressionMatchIterator i = reA.globalMatch(out);
        qInfo() << "ignore list:" << steamKillIgnore;
        while (i.hasNext()) {
            QRegularExpressionMatch match = i.next();
            if (match.hasMatch()) {
                auto m = match.captured(0);

                QRegExp rx(steamKillIgnore);
                rx.setCaseSensitivity(Qt::CaseInsensitive);
                if(rx.indexIn(m) < 0){
                    int childuid = QRegularExpression("\\s+\\d{1,}").match(m).captured().toInt();
                    recursiveKill(childuid);

                    system(tr("taskkill /pid %1").arg(childuid).toStdString().c_str());
                    qInfo() << "killing steam game " << m;
                    killed = true;
                }
            }
        }
    }
    return killed;
}

bool recursiveKill(const QString killprocess){
    int uid;
    bool parseOk;
    int tmpuid = killprocess.toInt(&parseOk);
    if(!parseOk) {
        QProcess process;
        process.start("cmd /c tasklist /FI \"IMAGENAME eq " + killprocess + "\"");
        process.waitForFinished(-1); // will wait forever until finished
        QByteArray out = process.readAllStandardOutput();
        QRegExp rx(killprocess + ".*(\\d{1,})");
        rx.indexIn(out);
        uid = QRegularExpression("\\d{1,}").match(rx.cap()).captured().toInt();
    }
    else uid = tmpuid;

    return recursiveKill(uid);
}

bool steamKill(){
    return recursiveKill("Steam.exe");
}
