#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[3][3],i,j;
    printf("Please Input 3x3 dimension matrix\n");

    for(i=1;i<3;i++){
        for(j=1;j<3;j++){
            printf("Input Number for (i,j)",i+1,j+1);
            scanf("%d",a[i][j]);


            
        }
    }
    printf("\n=== Input Matrix ===\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}