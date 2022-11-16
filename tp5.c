#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "listabiblio.h"
#include <time.h>







int main(void){
    TList lista = new(); //creo lista vacia
    int v[50000];
    int start, end, start1, end1;

    v[0]=0;
    for(int i=1; i<50000; i++){
        add(lista, i);
        v[i]=i;
    }

    TList aux = lista;

    start = clock();
    for(int i=0; i<50000; i++){
        printf(" %d ",aux->head);
        aux=aux->tail;
    }
    end = clock();
    putchar('\n');

    start1 = clock();
    for(int i=0; i<50000; i++){
        printf( " %d ", v[i]);
    }
    end1 = clock();

    printf("\ntiempo lista: %d \n tiempo vec: %d", end-start, end1-start1);
    freeList(lista);
}
