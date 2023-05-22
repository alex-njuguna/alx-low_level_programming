#!/bin/bash

c_files=$(find . -name "*.c" -type f)

for file in $c_files; do
    gcc -c -Wall -fpic "$file" -o "${file%.c}.o"
done

gcc -shared -o liball.so *.o

rm -f *.o
