#include <stdio.h>
#include <stdlib.h>

typedef int dataType;
typedef struct _node
{
    dataType data;
    struct _node *next;
}node;

node *GetNode(dataType item)
{
    node *temp;
    temp = (node*)malloc(sizeof(node));
    if(temp!=NULL)
    {
        temp->data = item;
        temp->next = NULL;
    }
    return temp;
}

void SortMintoMax(node **list){
    int a,loop;
    do{loop=0;
    node *p=*list;
    while(p->next!=0){
        if(p->data>p->next->data){
            a=p->data;
            p->data=p->next->data;
            p->next->data=a;
            loop=1;}
        p=p->next;}
    }while(loop);

}

void SortMaxtoMin(node **list){
    int a,loop;
    do{loop=0;
    node *p=*list;
    while(p->next!=0){
        if(p->data<p->next->data){
            a=p->data;
            p->data=p->next->data;
            p->next->data=a;
            loop=1;}
        p=p->next;}
    }while(loop);
}