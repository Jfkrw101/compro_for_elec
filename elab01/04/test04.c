#include <stdio.h>

int main(){
    float a,b,c,d,gpa;
    printf("GPA Calculation\n\n");
    printf("Please input 01205211's grade: ");
    scanf("%f",&a);
    printf("Please input 01205216's grade: ");
    scanf("%f",&b);
    printf("Please input 01208201's grade: ");
    scanf("%f",&c);
    printf("Please input 01417267's grade: ");
    scanf("%f",&d);
    gpa = ((a*3)+(b*3)+(c*3)+(d*3))/12;
    printf("Your GPA is %.2f",gpa);
    return 0;

}