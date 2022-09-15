#include <stdio.h>

int main(){
    int a=2, b=3, c=5;
    int  *pa=&a, *pb, **ptp;
    ptp = &pb;
    *pa += c;
    *ptp = &b;
    **ptp *= **ptp;
    c = **ptp**pb;
    printf("%d\n",*pa);
    printf("%d\n",**ptp);
    printf("%d\n",c);
    printf("%d\n",*pb);
}