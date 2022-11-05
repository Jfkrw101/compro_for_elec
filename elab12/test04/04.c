#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 40

typedef int dataType;
typedef struct Queue_{
    dataType data[MAXQUEUE];
    int front;
    int rear;
}Queue;

void InitializeQueue(Queue *q){
    q->front = q->rear = 0;

}
int IsQueueEmpty(Queue *q){
    if(q->front == q->rear)
    {
        return 1;
    }
    return 0;

}
int IsQueueFull(Queue *q){
    if(q->front == (q->rear + 1) % MAXQUEUE)
    {
        return 1;
    }
    return 0;

}
int EnQueue(Queue *q, dataType item){
    if(!IsQueueFull(q))
    {
        q->data[q->rear] = item;
        q->rear = (q->rear + 1) % MAXQUEUE;
        return 1;
    }
    return 0;

}
int DeQueue(Queue *q, dataType *item){
    if(!IsQueueEmpty(q))
    {
        *item = q->data[q->front];
        q->front = (q->front + 1) % MAXQUEUE;
        return 1;
    }
    return 0;

}