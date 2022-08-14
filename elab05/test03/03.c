#include <stdio.h>
#include <stdlib.h>
void plusmat();
void scalarmat();
void multiplemat();
int main()
{
        int mode, m, n, x, y, i, j; 
    do{ 
        printf("Please Select Mode, A+B>>1, axA>>2, AxB>>3, Exit>>0 :: "); 
        scanf("%d", &mode); 
        if(mode == 1) 
        { 
            plusmat(); 
        } 
        else if(mode == 2) 
        { 
            scalarmat(); 
        } 
        else if(mode == 3) 
        { 
            multiplemat(); 
        } 
        else if(mode > 3) 
        { 
            printf("\nselect mode error, please try again\n\n"); 
        } 
        else 
        { 
            printf("\nexit program"); 
            return 0; 
        } 
    }while(1); 
    }
void plusmat()
{
        do{ 
        int m, n, x, y, i, j; 
        printf("Please Input Dimension of Matrix A (mxn) : "); 
        scanf("%dx%d", &m, &n); 
        printf("Please Input Dimension of Matrix B (mxn) : "); 
        scanf("%dx%d", &x, &y); 
        printf("\n"); 
        int matA[m][n], matB[x][y], matC[x][y]; 
        if((m == x)&&(n == y)) 
        { 
            for(i = 0;i < m;i++) 
            { 
                for(j = 0;j < n;j++) 
                { 
                    printf("input A(%d,%d) : ",i + 1, j + 1); 
                    scanf("%d", &matA[i][j]); 
                } 
            } 
            printf("\n"); 
            for(i = 0;i < x;i++) 
            { 
                for(j = 0;j < y;j++) 
                { 
                    printf("input B(%d,%d) : ",i + 1, j + 1); 
                    scanf("%d", &matB[i][j]); 
                } 
            } 
            printf("\n===== result =====\n"); 
            for(i = 0;i < m;i++) 
            { 
                for(j = 0;j < n;j++) 
                { 
                    matC[i][j] = matA[i][j] + matB[i][j]; 
                    printf("%5d", matC[i][j]); 
                } 
                printf("\n"); 
            } 
            printf("\n"); 
            break; 
        } 
        else 
        { 
            printf("dimension fail, please try again\n\n"); 
            break; 
        } 
    }while(1); 
    }
void scalarmat()
{
        int m, n, a, i, j; 
    printf("Please Input Dimension of Matrix A (mxn) : "); 
    scanf("%dx%d", &m, &n); 
    printf("Please Input Scalar of a : "); 
    scanf("%d", &a); 
    int matA[m][n]; 
    printf("\n"); 
    for(i = 0;i < m;i++) 
    { 
        for(j = 0;j < n;j++) 
        { 
            printf("input A(%d,%d) : ",i + 1, j + 1); 
            scanf("%d", &matA[i][j]); 
        } 
    } 
    printf("\n===== result =====\n"); 
    for(i = 0;i < m;i++) 
    { 
        for(j = 0;j < n;j++) 
        { 
            printf("%5d",matA[i][j] * a); 
        } 
        printf("\n"); 
    } 
    printf("\n");
    }
void multiplemat()
{
        int m, n, x, y, i, j, k; 
    do{ 
        printf("Please Input Dimension of Matrix A (mxn) : "); 
        scanf("%dx%d", &m, &n); 
        printf("Please Input Dimension of Matrix B (mxn) : "); 
        scanf("%dx%d", &x, &y); 
        printf("\n"); 
        int matA[m][n], matB[x][y], matC[m][y]; 
        if(n == x) 
        { 
            for(i = 0;i < m;i++) 
            { 
                for(j = 0;j < n;j++) 
                { 
                    printf("input A(%d,%d) : ",i + 1, j + 1); 
                    scanf("%d", &matA[i][j]); 
                } 
            } 
            printf("\n"); 
            for(i = 0;i < x;i++) 
            { 
                for(j = 0;j < y;j++) 
                { 
                    printf("input B(%d,%d) : ",i + 1, j + 1); 
                    scanf("%d", &matB[i][j]); 
                } 
            } 
            printf("\n===== result =====\n"); 
            for(i = 0;i < m;i++) 
            { 
                for(j = 0;j < y;j++) 
                { 
                    matC[i][j] = 0; 
                    for(k = 0;k < x;k++) 
                    { 
                        matC[i][j] = matC[i][j] + (matA[i][k] * matB[k][j]); 
                    } 
                    printf("%5d", matC[i][j]); 
                } 
                printf("\n"); 
            } 
            printf("\n"); 
            break; 
        } 
        else 
        { 
            printf("dimension fail, please try again\n\n"); 
            break; 
        } 
    }while(1);
}
