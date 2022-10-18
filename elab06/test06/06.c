#include <stdio.h>
#include <stdlib.h>

int main(){
    int stockaprice[6],*ptr=stockaprice,code,amount=0,netprice=0;
    printf("Enter the price of snacks: ");
    scanf("%d",ptr);
    printf("Enter the number of snack in stock: ");
    scanf("%d",ptr+3);
    printf("\nEnter the price of sweets: ");
    scanf("%d",ptr+1);
    printf("Enter the number of sweets in stock: ");
    scanf("%d",ptr+4);
    printf("\nEnter the price of drinks: ");
    scanf("%d",ptr+2);
    printf("Enter the number of drinks in stock: ");
    scanf("%d",ptr+5);
    printf("\n-----For customer-----\n");
    while(1){
        printf("\nEnter 1 for snacks,2 for sweets,3 for drinks,type any numberfor check: ");
        scanf("%d",&code);
        if(code!=1&&code!=2&&code!=3){
            break;
        }
        printf("How much: ");
        scanf("%d",&amount);
        while(amount>*(ptr+2+code)){
            printf("Sorry! Insufficient storage. Please enter again: ");
            scanf("%d",&amount);



            }
            *(ptr+2+code)-=amount;
            netprice+=*(ptr-1+code)*amount;
        

    }
    printf("\n---Calculate---\n\nNet price: %d\n",netprice);
    printf("\nRemaining snack : %d\nRemaining sweets: %d\nRemaining drinks: %d",*(ptr+3),*(ptr+4),*(ptr+5));
}