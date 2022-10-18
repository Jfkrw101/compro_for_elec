#include <stdio.h>

int main(){
    
    //declare & initial the variable
    int m=2,n=3,o=4,*p1,*p2,**ptp;

    p1=&m;
    p2=&n;
    ptp=&p1;

    printf("Before\n");
    printf("m = %d\n",*p1);
    printf("n = %d\n",*p2);
    printf("m = %d",**ptp);
    p1=&n;
    printf("\nAfter 1\n");
    printf("n = %d\n",*p1);
    printf("n = %d\n",*p2);
    printf("n = %d\n",**ptp);

    p1=&o;
    n=5;
    ptp=&p2;
    printf("\nAfter 2\n");
    printf("o = %d\n",*p1);
    printf("n = %d\n",*p2);
    printf("n = %d",**ptp);

    return 0;





}