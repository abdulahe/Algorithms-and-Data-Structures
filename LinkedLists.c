//single linked circular list

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}NODE;

NODE *first=NULL,*temp=NULL,*last=NULL;

void addAtEnd(int elem){
    temp = (NODE*)malloc(sizeof(NODE));
    temp->data = elem;
    last->next = temp;
    temp->next = first;
    last = temp;
}

void addAfter(int elem, NODE *p){
    if(first == NULL){
        printf("List is empty");
        return;
    }
    NODE *q,*header;
    header = (NODE*)malloc(sizeof(NODE));
    header->next = first;
    last->next = header;
    header->data = NULL;
    while (q != header){
        if(q == p)
            break;
        q = q->next;
    }
    if(q == p){}
}