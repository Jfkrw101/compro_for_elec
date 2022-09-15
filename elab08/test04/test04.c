#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,m,n,o;
    float ***A;
    /*----------Dimension of Matrix----------*/
    printf("Input dimension for matrix(m,n,o)\n");
    printf("Enter m : ");
    scanf(" %d", &m);
    printf("Enter n : ");
    scanf(" %d", &n);
    printf("Enter o : ");
    scanf(" %d", &o);
    //printf("Check 1\n");

    /*----------Malloc----------*/
    A = (float***)malloc(o*sizeof(float**));
    for(i = 0;i < o;i++)
    {
        A[i] = (float**)malloc(n*sizeof(float*));
        for(j = 0;j < n;j++)
        {
           A[i][j] = (float*)malloc(m*sizeof(float));
        }
        //printf("Check 2\n");
    }

    /*----------Get Inf----------*/
    for(i = 0;i < o;i++)
    {
        for(j = 0;j < m;j++)
        {
            for(k = 0;k < n;k++)
            {
                printf("Input number for (%d,%d,%d) : ", j+1, k+1, i+1);
                scanf(" %f", &A[j][k][i]);
            }
        }
        //printf("Check 3\n");
    }
    printf("\n");

  
    /*----------Display----------*/

    for(i=0;i<o;i++){
        for(j=0;j<m;j++){
            for(k=0;k<n;k++){
                printf("%7.2f ",A[j][k][i]);
            }
            printf("\n");
        }
        printf("\n");
    }
    /*ให้เขียนคำสั่งเพื่อ free ข้อมูล*/

    /*----------Free----------*/
    for(i = 0;i < 0;i++)
    {
        for(j = 0;j < n;j++)
        {
            free(A[i][j]);
        }
        free(A[i]);
    }
    free(A);
    return 0;
}