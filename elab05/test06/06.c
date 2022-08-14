#include<stdio.h>
#include<stdlib.h>

int fac(N){
    if(N==0) return 1;
    else return N*fac(N-1);
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    printf("n! is %d\n",fac(n));
    return 0;
}