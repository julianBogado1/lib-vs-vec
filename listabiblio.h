//
// Created by Julian on 15/11/2022.
//

#ifndef PI_LISTABIBLIO_H
#define PI_LISTABIBLIO_H

typedef unsigned long int largazo;

struct Tnode{
    int head;
    struct Tnode * tail;

};

typedef struct Tnode * TList;

//devuelve nueva lista vacia
TList new();

//agrega un nuevo nodo
TList add(TList l, int elem);


//libera lista
void freeList(TList l);



#endif //PI_LISTABIBLIO_H
