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

//swimmer 2
void BestTeam(Node** pList){
int i=0,j,k,l,N,bi=-1,bj=-1,bk=-1,bl=-1;
float leasttime=240,mixtime;
while (pList[i]){
    i=i+1;
}
N=i;
for (i=0;i<N;i=i+1){
    for (j=0;j<N;j=j+1){
        if (i==j){
            continue;
        }
        for (k=0;k<N;k=k+1){
            if (k==j||k==i){
                continue;
            }
            for (l=0;l<N;l=l+1){
                if (l==k||l==j||l==i){
                    continue;
                }
                mixtime=pList[i]->Back50+pList[j]->Breast50
                        +pList[k]->Fly50+pList[l]->Free50;
                if (mixtime<leasttime){
                    leasttime=mixtime;
                    bi=i;
                    bj=j;
                    bk=k;
                    bl=l;
                }
            }
        }
    }
}
printf("BestTeam: ");
printf("%s %s ",pList[bi]->Name,pList[bj]->Name);
printf("%s %s",pList[bk]->Name,pList[bl]->Name);
printf(", Time = ");
printf("%.2f+%.2f",pList[bi]->Back50,pList[bj]->Breast50);
printf("+%.2f+%.2f",pList[bk]->Fly50,pList[bl]->Free50);
printf(" = %.2f",leasttime);
}
