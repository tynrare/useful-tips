#!/bin/bash
if [[ "$1" = "--help" || "$1" = "-h" ]]; then 
	echo "usage:
		Batch.sh sourcename wtiles htiles wtilesize htilesize resultname
		sourcename may be regexp like [0-8].png or {name1,name2}.png"
else
	montage "$1" -tile $2x$3 -geometry $4x$5+0+0 -background transparent $6
fi
