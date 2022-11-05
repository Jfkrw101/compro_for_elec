#include <stdio.h>
#include <math.h>

struct Vector{
    float x,y;

};

struct  Test{
    float a,b[20];

};
int main(){
    struct Vector v1,v2,v3;
    float temp,length;
    printf("sizeof(v1)=%d,sizeof(v1.x)=%d\n",sizeof(v1),sizeof(v1.x));
    printf("sieof(struct Test)=%d\n",sizeof(struct Test));
    printf("Enter the value for v1.x: ");
    scanf("%f",&temp);
    v1.x=temp;
    printf("Enter the value for v1.y: ");
    scanf("%f",&temp);
    v1.y=temp;
    printf("Enter the value for v2.x: ");
    scanf("%f",&temp);
    v2.x=temp;
    printf("Enter the value for v2.y: ");
    scanf("%f",&temp);
    v2.y=temp;
    length=sqrt(pow(v1.x,2)+pow(v1.y,2));
    printf("Length of v1=%f\n",length);
    v3.x=v1.x+v2.x;
    v3.y=v1.y+v2.y;
    printf("v1+v2=(%f,%f)\n",v3.x,v3.y);
    return 0;
    
    
    
}
