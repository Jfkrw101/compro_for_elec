#include <stdio.h>
#include <math.h>

typedef struct{
    float real;
    float imag;

}complex;

int findmaxcomplex(complex *find){
    int i,max;
    float length2,mlen;
    mlen=sqrt(pow(find[i].real,2)+pow(find[i].imag,2));
    max=0;
    for(i=0;i<9;i++){
        length2=sqrt(pow(find[i+1].real,2)+pow(find[i+1].imag,2));
        if(length2>mlen){
            max=i+1;
            mlen=length2;

        }
    }
    return max;
    
}
int main(){
    complex a[10];
    int i,max;
    printf("Start inputValue of complex\n\n");
    for(i=0;i<10;i++){
        printf("Input a[%d].real: ",i);
        scanf("%f",&a[i].real);
        printf("Input a[%d].imag: ",i);
        scanf("%f",&a[i].imag);
        printf("\n");

    }
    max=findmaxcomplex(a);
    printf("Max length is a[%d]\n",max);
    return 0;
}