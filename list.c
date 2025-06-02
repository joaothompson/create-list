#include <stdlib.h>
#include <stdio.h>
#include "list.h"

List * createList()
{
    List * l = (List *) malloc(sizeof(List));
    l->first = NULL;
    l->n = 0;
    return l;
}

Node * createNode(int obj)
{
    Node * l = NULL;
    // make it happen

    return l;
}

Node * insertNode(Node * node, int obj)
{
    if(node==NULL)
    {
        Node * new_node = createNode(obj); //
        return new_node;
    }
    if(node->obj > obj)
    {
        node->next = insertNode(node->next, obj);
        return node;
    }
    else
    {
        Node * new_node = createNode(obj); //
        new_node->next = node;
        return new_node;
    }
}

void printList(List * list)
{
    Node * node = list->first;
    if(node)
    {
        printf("%d", node->obj);
        node = node->next;
    }
    while(node!=NULL)
    {
        printf(" %d", node->obj);
        node = node->next;
    }
    return;
}

void freeNode(Node * node)
{
    //make it happen, pls
    return;
}

void freeList(List * list)
{
    //make it happen, pls
    return;
}


void insertList(List * list, int obj)
{
    list->n++;
    list->first = insertNode(list->first, obj);
    return;
}

