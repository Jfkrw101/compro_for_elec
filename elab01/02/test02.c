#include<stdio.h>
#define PI 3.14159

int main()
{
    double r, area;
    printf("input radius of circle : ");
    scanf("%lf", &r);
    area = PI*(r*r);
    printf("area = %.0lf",area);
    return 0;
}