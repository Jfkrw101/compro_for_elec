#include <stdio.h>
int main()
{
    int i,j,k;
    int Dim[2][3][4] = {{{23, 42, 55, 87}, {28, 22, 41, 39}, {72, 81, 37, 22}}, {{12, 42, 29, 26}, {51, 71, 33, 25}, {20, 46, 77, 12}}};
    for(i=0;i<2;i++)
    {
        printf("Dim 1-%d\n", i+1);
        for(j=0;j<3;j++)
        {
            for(k=0;k<4;k++)
                {
                    printf("%d ",Dim[i][j][k]);

                }
            printf("\n");

        }
        printf("\n");
    }
}