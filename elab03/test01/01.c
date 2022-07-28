#include<stdio.h>

int main(){
    char code;
    int price,discount;
    printf("Please input price: ");
    scanf("%d",&price);
    printf("Please input discount code: ");
    scanf("%s",&code);
    switch(code){
        case 'a':
            discount=25;
            printf("\nYour discount is 25 percent");
            break;
        case 'A':
            discount=25;
            printf("\nYour discount is 25 percent");
            break;
        case 'b':
            discount=15;
            printf("\nYour discount is 15 percent");
            break;
        case 'B':
            discount=15;
            printf("\nYour discount is 15 percent");
            break;
        case 'c':
            discount=5;
            printf("\nYour discount is 5 percent");
            break;
        case 'C':
            discount=5;
            printf("\nYour discount is 5 percent");
            break;
        default:
        discount=0;
        printf("\nWrong code.Your discount is 0 percent");
        break;
    }
    float b;
    b=price-(float)(price*discount)/100;
    printf("\nYour new price is %.2f",b);
    return 0;
}