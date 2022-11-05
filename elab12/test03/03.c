#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 40

typedef int dataType;
typedef struct _node{
    dataType data;
    struct _node *next;
}node;
typedef struct _Queue{
    int count;
    node *front;
    node *rear;
}Queue;
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

Queue *CreateQueue(){
    Queue *q;
    q = (Queue*)malloc(sizeof(Queue));
    if(q != 0)
    {
        q->count = 0;
        q->front = q->rear = 0;
        return q;
    }
    return 0;

}

int IsQueueEmpty(Queue *q){
    if(q->count == 0)
    {
        return 1;
    }
    return 0;

}
int EnQueue(Queue *q, dataType item){
    node *pNew;
    pNew = GetNode(item);
    if(q != 0)
    {
        if(IsQueueEmpty(q))
        {
            q->front = q->rear = pNew;
        }
        else
        {
            q->rear->next = pNew; //link Queue and pNew
            q->rear = pNew;
        }
        (q->count)++;
        return 1;
    }
    return 0;

}
int DeQueue(Queue *q, dataType *item){
    node *tmp;
    if(q != 0)
    {
        if(!IsQueueEmpty(q))
        {
            tmp = q->front;
            *item = tmp->data; //Feedback Value
            q->front = tmp->next; //New Front
            free(tmp);
            (q->count)--;
            return 1;
        }
    }
    return 0;

}