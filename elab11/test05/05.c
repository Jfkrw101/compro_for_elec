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

void AverageList(node **List){
    float a=0,b=0;if((*List)==0)
    printf("Don't have List Node!!!");
    else{while((*List)!=0){a+=((*List)->data);
    (*List)=(*List)->next;b+=1;}printf("AverageList : %.2f", a/b);}
}