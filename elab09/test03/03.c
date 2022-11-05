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