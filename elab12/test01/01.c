#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 40

typedef int StackElement;
typedef struct Stack_{
    StackElement data[STACKSIZE];
    int top;
}Stack;


void InitializeStack(Stack *st){
    st->top = -1;

}

int IsStackEmpty(Stack *st){
       if(st->top == -1){
        return 1;
    }
    return 0;

}
int IsStackFull(Stack *st){
    if(st->top == STACKSIZE-1){
    return 1;
    }
    return 0;

}

int Push(Stack *st,StackElement item){
    if(st->top == STACKSIZE-1){
    return 0;
    }
    else{
        st->data[++(st->top)] = item;
        return 1;
    }

}

int Pop(Stack *st,StackElement *item){
    if(st->top<0){
    return 0;
    }
    else{
        *item = st->data[(st->top)--];
        return 1;
    }

}
