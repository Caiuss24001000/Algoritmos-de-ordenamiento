#!/bin/bash
#cantidades de numeros a ordenar 

gcc anda.c seleccion.c -o sergio

for i in {0..19}
do
    ./sergio 
    echo 
done