#ifndef COLA_H
#define COLA_H 

typedef struct Nodo{
    int dato;
    struct Nodo *sig;
}nodo;

typedef nodo *pNodo;

typedef struct CNodo{
    pNodo inicio;
    pNodo fin;
}*cola;

pNodo inicio=NULL;
pNodo fin=NULL;

/*DECLARACION DE FUNCIONES (PROTOTIPOS)*/
int vacia();
void insCola(int n);
int ext();
void imp();
void liberar();
pNodo retIni();
cola crea();

/*FUNCIONES*/

cola crea(){
    cola q=(cola)malloc(sizeof(cola));
    q->fin=q->inicio=NULL;
    return q;
}

int vacia(){
    return (inicio==NULL)?1:0;
}

//funcion insertar elementos 
void insCola(int n){
    pNodo nuevo;
    nuevo = (pNodo)malloc(sizeof(nodo));
    nuevo->dato=n;
    nuevo->sig=NULL;

    if (vacia())
    {
        inicio=nuevo;
    }else{
        fin->sig=nuevo;
    }

    fin=nuevo;
}

int ext(){
    if (!vacia()){

        int inf=inicio->dato;
        pNodo bor=inicio;
        if (inicio==fin)
        {
            inicio=fin=NULL;
        }else{
            inicio=inicio->sig;
        }
        free(bor);
        return inf;
    }else{
        return -1;
    }
}

void imp(){
    pNodo reco=inicio;
    printf("Listado completo\n");
    while(reco!=NULL){
        printf(" %i ", reco->dato);
        reco=reco->sig;
    }
    printf("\n");
}

void liberar(){
    pNodo reco=inicio;
    pNodo bor;
    while(reco!=NULL){
        bor=reco;
        reco=reco->sig;
        free(bor);
    }

}

pNodo retIni(){
    return inicio;
}

#endif