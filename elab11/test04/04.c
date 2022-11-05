#include <stdio.h>
#include <stdlib.h>

typedef int dataType;
typedef struct _node{
    dataType data;
    struct _node *next;
}node;
node *GetNode(dataType item){
    node *list;
    list = (node *)malloc(sizeof(node));
    if (list)
    {
        list->data = item;
        list->next = 0;
    }
    return list;
    
}
void FindMaxMin (node *list,int *pMax,int *pMin){
    node *p;
    p = list;
    if(p==0)
    {
        printf("List is empty");
        exit(0);
    }
    int max=-1000;
    int min=1000;
    while(p!=0)//check max
    {
        if(max>p->data)
        {
            max=max;
        }
        else if(max<p->data)
        {
            max=p->data;
        }
        p = p->next;
    }
    p = list;
    while(p!=0)//check min
    {
        if(min>p->data)
        {
            min=p->data;
        }
        else if(min<p->data)
        {
            min=min;
        }
        p = p->next;
    }
    pMax = max;
    pMin = min;
    printf("Max value = %d and Min value = %d",max,min);
}