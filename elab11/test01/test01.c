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