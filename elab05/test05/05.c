#include <stdio.h>
#include <stdlib.h>
int factorial(int);
int permutat(int,int);
int combinat(int,int);
void triangle(int);

int main()
{   
    char mode;
    int ans,n,r;
    while(1){
        printf("Enter mode(F)actorial,(P)ermutations,(C)ombinations, Pascal (T)riangle, (q)uit : ");
        scanf(" %c",&mode);
        switch(mode){
            case 'F':
                printf("Enter n for n! : ");
                scanf("%d",&n);
                ans = factorial(n);
                printf("%d! = %d\n",n,ans);
                break;
            case 'P':
                printf("Enter n,r for nPr : ");
                scanf("%d,%d",&n,&r);
                ans = permutation(n,r);
                printf("%dP%d = %d\n",n,r,ans);
                break;
            case 'C':
                printf("Enter n,r for nCr : ");
                scanf("%d,%d",&n,&r);
                ans = combination(n,r);
                printf("%dC%d = %d\n",n,r,ans);
                break;
            case 'T':
                printf("Enter row of Pascal Triangle : ");
                scanf("%d",&n);
                triangle(n);
                break;
            case 'q':
                printf("Goodbye");
                return 0;
            default :
                printf("Error Please enter again\n");
                break;
        }
    }
    return 0;
}
int factorial(int n){
        if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int permutat(int n,int r){
    int ans;
    ans =factorial(n)/factorial(n-r);
    return ans;
}
int combinat(int n,int r){
    int ans;
    ans =factorial(n)/factorial(n-r);
    return ans;
}
void triangle(int n){
    int i,j,space,coef=1;
    for(i =0;i<n;i++){
        for(space=1;space<n-i;space++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            if(j==0||i==0){
                coef=1;
                printf("%d ",coef);
            }
            else{
                coef =coef*(i-j+1)/j;
                printf("%d ",coef);
            }
        }
        printf("\n");
    }
}

