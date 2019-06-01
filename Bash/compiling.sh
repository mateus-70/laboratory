#!/bin/bash
FILES=""
for filename in "$@"; do
    FILES="$FILES $filename"
    if [[ 0 -eq $(test -f "$filename") ]]; then
        echo "The file '$filename' does not exist, exiting."
        exit 1
    fi

done
gcc -m64 -std=c11 -pedantic -Wall -Wshadow -Wpointer-arith -Wcast-qual -Wstrict-prototypes -Wmissing-prototypes "$FILES"
