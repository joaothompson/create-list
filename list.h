#include <stdlib.h>
#include <stdio.h>

#ifndef LIST_H
#define LIST_H


typedef struct node_struct{
    int obj;
    struct node_struct * next;   
} Node;

typedef struct my_list
{
    Node * first;
    int n;
} List;

List * createList();

Node * createNode(int obj);

Node * insertNode(Node * node, int obj);

void printList(List * list);

void freeNode(Node * node);

void freeList(List * list);

void insertList(List * list, int obj);


#endif
