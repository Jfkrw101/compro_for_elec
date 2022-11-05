#include <stdio.h>
#include <math.h>

typedef struct{
    float real;
    float imag;
}complexrec;

typedef struct{
    float amplitude;
    float angle;

}complexpol;

complexrec converttorec(complexpol z){
    complexrec a;
    a.real=z.amplitude*cos(z.angle);
    a.imag=z.angle*sin(z.angle);
    return a;
}

complexpol converttopol(complexrec z){
    complexpol b;
    b.amplitude=sqrt(pow(z.real,2)+pow(z.imag,2));
    b.angle=atan2(z.imag,z.real);
    return b;
}
complexrec Add(complexrec z1,complexrec z2){
    complexrec c;
    c.real=z1.real+z2.real;
    c.imag=z1.imag+z2.imag;
    return c;
}

complexrec subtract(complexrec z1,complexrec z2){
    complexrec d;
    d.real=z1.real-z2.real;
    d.imag=z1.imag-z2.imag;
    return d;
}

complexrec Multiply(complexrec z1,complexrec z2){
    complexrec e;
    e.real=(z1.real*z2.real)-(z2.imag*z1.imag);
    e.imag=(z1.imag*z2.imag)+(z1.real*z2.real);
    return e;
}

complexrec divide(complexrec z1,complexrec z2){
    complexrec a;
    a.real = ((z1.real*z2.real)+(z1.imag*z2.imag))/(pow(z2.real,2)+pow(z2.imag,2));
    a.imag = ((z1.imag*z2.real)-(z1.real*z2.imag))/(pow(z2.real,2)+pow(z2.imag,2));
    return a;
}
complexrec power(complexrec z,int n){
    if(n==1){
        return z;
    return Multiply(z,power(z,n-1));
    }
}

complexrec conjugate(complexrec z){
    complexrec a;
    a.real=z.real;
    a.imag=-z.imag;
    return a;
}