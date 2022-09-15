#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,sum;
    char **A,*B;
    printf("Enter n : ");
    scanf("%d", &n);
    A = (char**)malloc(n*sizeof(char*));
    sum = 0;
    for(i = 0;i <= n;i++)
    {
        sum += i;
    }

    /*----------Debug----------*/
    char a;
    scanf("%c", &a);
    /*-------------------------*/

    /*----------Get Inf----------*/
    printf("\nTotal character = %d\n", sum);
    B = (char*)malloc(sum*sizeof(char));
    printf("Enter word : ");
    gets(B);
    //printf("B[0] = %s", &B[1]);

    /*----------Pointer to Pointer----------*/
    sum = 0;
    for(i = 0;i < n;i++)
    {
        sum += i;
        A[i]  = &B[sum];
    }
    printf("\n***Result***\n");
    for(i=0;i<n;i++){
        printf("%s\n",A[i]);
    }
    /*ให้เขียนคำสั่งเพื่อ free ข้อมูล*/
    free(A);
    free(B);
    return 0;
}