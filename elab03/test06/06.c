
#include <stdio.h>

int main(){
    int base10;
    int i,a[10];
    printf("Please input number : ");
    scanf(" %d",&base10);
    while((base10>=-512)&&(base10<=511)){
        if(base10>=0){
            printf("%4d is ",base10);
            for(i=0;i<10;i++){
            a[i]=base10%2;
            base10=base10/2;


            }
            for(i=9;i>=0;i--){
                printf("%d",a[i]);

                }printf(" in 2's complement");
     }   
     else if(base10<0){
         printf("%4d is ",base10);
         base10=base10*(-1);
         base10=base10-1;
         for(i=0;i<10;i++){
             a[i]=base10%2;
             base10=base10/2;
             if(a[i]==1){
                 a[i]=0;
             }
             else{
                 a[i]=1;
             }
         }
         for(i=9;i>=0;i--){
             printf("%d",a[i]);
         }
             printf(" in 2's complement");
     }
     printf("\nPlease input number :");
     scanf(" %d",&base10);
    }
    printf("Sorry, your number is more than 10 bits.\nGoodbye");
    return 0;
}
