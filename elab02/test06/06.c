#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,d;
    printf("Enter real part: ");
    scanf("%f",&a);
    printf("Enter imaginary part: ");
    scanf("%f",&b);
    c=sqrt(pow(a,2)+pow(b,2));
    d=(atan(b/a)*180)/M_PI;
    printf("The polar form is: %.2f, %.2f",c,d);
    return 0;
}