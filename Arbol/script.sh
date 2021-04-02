#!/bin/bash
#cantidades de numeros a ordenar 

gcc TestArBin.c -o andres

for i in {0..19}
do
    ./andres 
    echo 
done