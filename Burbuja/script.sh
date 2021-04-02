#!/bin/bash
#cantidades de numeros a ordenar 

gcc bubble.c -o norman1
gcc enbubble.c -o norman2

for i in {0..19}
do
    ./norman1
    echo 
done