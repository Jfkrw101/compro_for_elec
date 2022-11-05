#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 40

typedef int dataType;
typedef struct _node{
    dataType data;
    struct _node *next;
}node;
typedef struct _Stack{
    int count;
    node *top;
}Stack;
node *GetNode(dataType item){
    node *temp;
    temp = (node*)malloc(sizeof(node));
    if(temp!=NULL)
    {
        temp->data = item;
        temp->next = NULL;
    }
    return temp;
}

Stack *CreateStack(){
    Stack *st;
    st = (Stack*)malloc(sizeof(Stack));
    if(st == 0)
    {
        return 0;
    }
    st->count = 0;
    st->top = 0;
    return st;

}
int IsStackEmpty(Stack *st){
    if(st->count == 0)
    {
        return 1;
    }
    return 0;


}
int Push(Stack *st, dataType item){
    node *pNew;
    if(st != 0)
    {
        pNew = GetNode(item);
        pNew->next = st->top;
        st->top = pNew;
        (st->count)++;
        return 1;
    }
    return 0;

}
int Pop(Stack *st, dataType *item){
    node *tmp;
    if(st != 0)
    {
        if(!IsStackEmpty(st))
        {
            tmp = st->top;
            *item = tmp->data;
            st->top = tmp->next;
            free(tmp);
            (st->count)--;
            return 1;
        }
    }
    return 0;

}