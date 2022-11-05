#include <stdio.h>
#include <stdlib.h>

typedef struct node{
        char Name[11];
        float Free50;
        float Fly50;
        float Back50;
        float Breast50;
}Node;

void DisplayTieArr(Node **pList){
    if(*pList){
        printf("\tFree50\tFly50\tBack\tBreaset50\n");
        }
        while(*pList){
            printf("%s",(*pList)->Name);
            printf("\t%.2f",(*pList)->Free50);
            printf("\t%.2f",(*pList)->Fly50);
            printf("\t%.2f",(*pList)->Back50);
            printf("\t%.2f\n",(*pList)->Breast50);
            *pList++;
    }
}