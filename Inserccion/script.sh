#!/bin/bash
#cantidades de numeros a ordenar 

gcc testInsercion.c -o gustabo

for i in {0..19}
do
    ./gustabo 
    echo 
done