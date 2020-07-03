//
// Created by 彭刚 on 2020/4/14.
//

#ifndef LEARN_LIST_H
#define LEARN_LIST_H

#endif //LEARN_LIST_H

#include <stdio.h>
typedef struct ListElmt_{
    void *data;
    struct ListElmt_ *next;
} ListElmt;

typedef struct List_{
    int size;
    int (*match) (const void *key1,const void * key2);
    void (*destroy) (void *data);
    ListElmt *head;
    ListElmt *tail;
} List;

void createListHeader(ListElmt &l){

}