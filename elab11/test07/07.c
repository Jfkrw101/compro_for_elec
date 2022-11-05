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

int InsertFirst(node **list,dataType item){
    node *newnode=GetNode(item);
    if(*list==NULL){*list=newnode;return 1;}
    else
    {
        newnode->next=(*list);
        *list=newnode;
        return 1;
    }
    return 0;


}

int InsetLast(node **list,dataType item){
    node *newnode=GetNode(item);
    if(*list==NULL){*list=newnode;return 1;}
    else
    {
        node *p=*list;
        while(p->next!=0){p=p->next;}
        p->next=newnode;
        return 1;
    }
    return 0;


}

int DeleteFirst(node **list){
    if(*list==NULL){return 0;}
    else
    {
        node *temp=*list;
        *list=temp->next;
        free(temp);
        return 1;
    }

}

int DeleteLast(node **list){
    if(*list==NULL){return 0;}
    else if((*list)->next==NULL){*list=NULL;return 1;}
    else
    {
        node *p=*list;
        while(p->next->next!=0)
        {
            p=p->next;
        }
        free(p->next);
        p->next=NULL;
        return 1;
    }


}