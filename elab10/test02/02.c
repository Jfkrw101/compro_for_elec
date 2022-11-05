#include <stdio.h>
#include <stdlib.h>
void BubbleSort(float *p, int len, char m){
    int i,j,k,swap=0,slashn=0;
    float temp;
    if(m =='+'){
        for(i=0;i<len-1;i++){
            for(k=0;k<len-i-1;k++){
                if(p[k] > p[k+1]){
                    temp = p[k];
                    p[k] = p[k+1];
                    p[k+1] = temp;
                    swap = 1;
                }
            }
            if(swap==0)
                break;
            else{
                printf("Sorting %d : ",i+1);
                for(j=0;j<len;j++)
                    printf("%.2f  ",p[j]);
                swap = 0;
                slashn = 1;
                printf("\n");
            }
        }
        if(slashn==0){
            printf("After sort : ");
            for(i=0;i<len;i++)
                printf("%.2f  ",p[i]);
        }
        else if(slashn==1){
            printf("\nAfter sort : ");
            for(i=0;i<len;i++)
                printf("%.2f  ",p[i]);
        }
    }
    else if(m =='-'){
        for(i=0;i<len-1;i++){
            for(k=0;k<len-i-1;k++){
                if(p[k+1] > p[k]){
                    temp = p[k];
                    p[k] = p[k+1];
                    p[k+1] = temp;
                    swap = 1;
                }
            }
            if(swap==0)
                break;
            else{
                printf("Sorting %d : ",i+1);
                for(j=0;j<len;j++)
                    printf("%.2f  ",p[j]);
                swap = 0;
                slashn = 1;
                printf("\n");
            }
        }
        if(slashn==0){
            printf("After sort : ");
            for(i=0;i<len;i++)
                printf("%.2f  ",p[i]);
        }
        else if(slashn==1){
            printf("\nAfter sort : ");
            for(i=0;i<len;i++)
                printf("%.2f  ",p[i]);
        }
    }
    else{
        printf("After sort : ");
        for(i=0;i<len;i++)
            printf("%.2f  ",p[i]);
        exit(0);
    }
}
int main(){
    int n,i;
    float* a;
    char m;
    printf("Input n : ");
    scanf("%d",&n);
    printf("\n");
    a = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++){
        printf("Input arr[%d] : ",i);
        scanf("%f",&a[i]);getchar();
    }
    printf("\nBefore sort : ");
    for(i=0;i<n;i++){
        printf("%.2f  ",a[i]);
    }
    printf("\n");
    printf("\nAscending or descending (+/-) : ");
    scanf("%c",&m);getchar();
    printf("\n");
    BubbleSort(a, n , m);
    free(a);
    return 0;
}
