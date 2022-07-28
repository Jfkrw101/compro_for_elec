#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n = (rand()%(100)); //สุ่มตัวเลขตั้งแต่1-100
    int x;
    printf("Enter number : ");
    scanf("%d",&x);

    while(x!=n){
        if(x<n){
            printf("x is less than  n");
        }
        else if(x>n){
            printf("x is more than n");
        }
        printf("\nEnter number : ");
        scanf("%d",&x);
    }
    printf("correct");
    return 0;
}