#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,d;
    printf("Enter a, b, c:");
    scanf("%f %f %f",&a,&b,&c);
    
    do{
        d=pow(a,2)+pow(b,2);
        if(a&&b&&c==0){
            printf("Good bye\n");
            return 0;
        }
        if(d==pow(c,2)){
            printf("Pythagoren tiple: %.2f + %.2f = %.2f\n",a,b,d);

        }
        else{
            printf("Not pythagorean triple:%.2f + %.2f =%.2f",a,b,pow(b,2));

        }


    }while(a==b==c>=0);
    return 0;
}