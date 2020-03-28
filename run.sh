#! /bin/bash

rm -rf bin
mkdir -p bin
for i in `ls basic_functions/*.c`; do
  executable=`echo ${i} | sed 's/basic_functions\///' | sed "s/.c$//"`
  gcc -o bin/${executable} ${i} 2>/dev/null
done