#!/bin/bash
if [[ "$1" = "--help" || "$1" = "-h" ]]; then
	b_=$(tput bold)
	n_=$(tput sgr0)

	echo "
	Simple imagemagic wrapper. Converts lot images in one spritesheet. Usage:
		${b_}Batch.sh sourcename wtiles htiles wtilesize htilesize resultname
		${b_}sourcename ${n_}may be regexp like [0-8].png or {name1,name2}.png
		${b_}wtiles htiles ${n_}is number of sprites placed horizontally and vertically
		${b_}wtilesize htilesize ${n_}is size of each tile
		${b_}resultname ${n_}output name
		"
else
	montage "$1" -tile $2x$3 -geometry $4x$5+0+0 -background transparent $6
fi
