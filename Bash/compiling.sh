#!/bin/bash

# test all entry files
for filename in "$@"
do
    FILES="$filename $FILES"
    if [ -a "filename" ]; then
        echo "The file '$filename' does not exist, exiting."
        exit 1
    fi
done

#compile everything
gcc -m64 -std=c11 -pedantic -Wall -Wshadow -Wpointer-arith -Wcast-qual -Wstrict-prototypes -Wmissing-prototypes $@
