//
// Created by Julian on 15/11/2022.
//

#include <stdlib.h>
#include <stdio.h>


struct Tnode{
    int head;
    struct Tnode * tail;

};

typedef struct Tnode * TList;

//devuelve nueva lista vacia
TList new(){
    return calloc(1, sizeof(struct Tnode));
}

//agrega un nuevo nodo
TList add(TList l, int elem){
    if(l==NULL || l->head>elem){ //si estoy al final o me pase de orden
        TList aux = malloc(sizeof*(aux));
        aux->head = elem;
        aux->tail = l;
        return aux;   //enchufo aux donde estaba l antes
    }
    l->tail = add(l->tail, elem);
    return l;
}

//libera lista
void freeList(TList l) {
    if (l == NULL){
        free(l);
        return;
    }
    freeList(l->tail);
    free(l);
    return;
}
