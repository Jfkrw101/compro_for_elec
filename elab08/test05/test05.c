#include <stdio.h>
#include <stdlib.h>


int main(){
    int n,i,sum;
    char **A,*B;
    printf("Enter n: ");
    scanf("%d",&n);
    A=(char **)malloc(n*sizeof(char *));
    sum=0;
    for(i=0;i<=n;i++){

        sum+=i;
    }

    //debug
    char a;
    scanf("%c",&a);


    //get info
    printf("\n\nTotal character =%d\n",sum);
    B=(char *)malloc(sum*sizeof(char));
    printf("Enter word: ");
    gets(B);

    
    sum=0;
    for(i=0;i<n;i++){
        sum+=i;
        A[i]=&B[sum];
    }
    printf("\n***Result***\n");
    for(i=0;i<n;i++){
        printf("%s\n",A[i]);
    }
    free(A);
    free(B);
    return 0;


}