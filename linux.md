## Settings

### How to fix horisontal "vasync" lines
- Toggle "force composition pipeline" in nvidia-settings

### How to save nvidia-settings permanently
- (Manjaro) It has to be saved in /usr/share/X11/xorg.conf.d

### Working with commands
- type — Indicate how a command name is interpreted.
- which — Display which executable program will be executed.
- man — Display a command’s manual page.
- apropos — Display a list of appropriate commands.
- info — Display a command’s info entry.
- whatis — Display a very brief description of a command.
- alias — Create an alias for a command.

## Command line

### Movement
- ctrl-A Move cursor to the beginning of the line.
- ctrl-E Move cursor to the end of the line.
- ctrl-F Move cursor forward one character; same as the right arrow key.
- ctrl-B Move cursor backward one character; same as the left arrow key.
- alt-F Move cursor forward one word.
- alt-B Move cursor backward one word.
- ctrl-L Clear the screen and move the cursor to the top left corner. The clear command does the same thing.

### Editing
- ctrl-D Delete the character at the cursor location.
- ctrl-T Transpose (exchange) the character at the cursor location with the one preceding it.
- alt-T Transpose the word at the cursor location with the one preceding it.
- alt-L Convert the characters from the cursor location to the end of the word to lowercase.
- alt-U Convert the characters from the cursor location to the end of the word to uppercase.
- ctrl-K Kill text from the cursor location to the end of line.
- ctrl-U Kill text from the cursor location to the beginning of the line.
- alt-D Kill text from the cursor location to the end of the current word.
- alt-backspace Kill text from the cursor location to the beginning of the current word. If the cursor is at the beginning of a word, kill the previous word.
- ctrl-Y Yank text from the kill-ring and insert it at the cursor location.

### Completion
- alt-? Display list of possible completions. On most systems you can also do this by pressing the tab key a second time, which is much easier.
- alt-\* Insert all possible completions. This is useful when you want to use more than one possible match.

### History
- ctrl-P Move to the previous history entry. Same action as the up arrow.
- ctrl-N Move to the next history entry. Same action as the down arrow.
- alt-< Move to the beginning (top) of the history list.
- alt-> Move to the end (bottom) of the history list; i.e., the current command line.
- ctrl-R Reverse incremental search. Searches incrementally from the current command line up the history list.
- alt-P Reverse search, non-incremental. With this key, type the search string and press enter before the search is performed.
- alt-N Forward search, non-incremental.
- ctrl-O Execute the current item in the history list and advance to the next one. This is handy if you are trying to re-execute a sequence of commands in the history list.

- !! Repeat the last command. It is probably easier press the up arrow and enter. 
- ! number Repeat history list item number. 
- ! string Repeat last history list item starting with string. 
- !? string Repeat last history list item containing string .
