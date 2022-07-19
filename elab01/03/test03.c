#include <stdio.h>

int main(){
    float r1,r2,r3,rtotal;
    printf("R1 = ");
    scanf("%f",&r1);
    printf("R2 = ");
    scanf("%f",&r2);
    printf("R3 = ");
    scanf("%f",&r3);
    rtotal=((r1*r2)/(r1+r2))+r3;
    printf("Rtotal = %.2f ",rtotal);
    return 0;
}