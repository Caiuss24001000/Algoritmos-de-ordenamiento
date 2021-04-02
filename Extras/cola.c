#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

int main(){
    
    insCola(5);
    insCola(10);
    insCola(50);
    imp();
    printf("Extraemos %i\n", ext());
    imp();
    liberar();
    system("PAUSE");
    return 0;
}