#include <stdio.h>

typedef struct{
    float ax;
    float by;
    float c;

}eqn2;

typedef struct{
    float ax;
    float by;
    float cz;
    float d;

}eqn3;

//solve 2variable eqn
void sol2(eqn2 e1,eqn2 e2){
    float x,y;
    printf("Input a1x : "); scanf("%f",&e1.ax);
    printf("Input b1y : "); scanf("%f",&e1.by);
    printf("Input c1 : "); scanf("%f",&e1.c);
    printf("Input a2x : "); scanf("%f",&e2.ax);
    printf("Input b2y : "); scanf("%f",&e2.by);
    printf("Input c2 : "); scanf("%f",&e2.c);
    printf("\n\t%.2fx%+.2fy = %.2f",e1.ax,e1.by,e1.c);
    printf("\n\t%.2fx%+.2fy = %.2f\n",e2.ax,e2.by,e2.c);

    x=(e1.c*e2.by-e2.c*e1.by)/(e1.ax*e2.by-e1.by*e2.ax);
    y=(e1.ax*e2.c-e2.ax*e1.c)/(e1.ax*e2.by-e1.by*e2.ax);
    if(e1.ax*e2.by-e1.by*e2.ax==0){
        printf("\nYour equation is no answer\n\n");
    }
    else{
        if(x==-0.00){
            x=0;
            printf("\nx = %.2f\n",x);
        }
        if(y==-0.00){
            y=0;
            printf("y = %.2f\n\n",y);
        }

    }

}

//solve 3variable eqn
void sol3(eqn3 e1,eqn3 e2,eqn3 e3){
    printf("Input a1x : "); scanf("%f",&e1.ax);
    printf("Input b1y : "); scanf("%f",&e1.by);
    printf("Input c1z : "); scanf("%f",&e1.cz);
    printf("Input d1 : "); scanf("%f",&e1.d);
    printf("Input a2x : "); scanf("%f",&e2.ax);
    printf("Input b2y : "); scanf("%f",&e2.by);
    printf("Input c2z : "); scanf("%f",&e2.cz);
    printf("Input d2 : "); scanf("%f",&e2.d);
    printf("Input a3x : "); scanf("%f",&e3.ax);
    printf("Input b3y : "); scanf("%f",&e3.by);
    printf("Input c3z : "); scanf("%f",&e3.cz);
    printf("Input d3 : "); scanf("%f",&e3.d);
    printf("\n\t%.2fx%+.2fy%+.2fz = %.2f",e1.ax,e1.by,e1.cz,e1.d);
    printf("\n\t%.2fx%+.2fy%+.2fz = %.2f",e2.ax,e2.by,e2.cz,e2.d);
    printf("\n\t%.2fx%+.2fy%+.2fz = %.2f\n",e3.ax,e3.by,e3.cz,e3.d);

    float det = (e1.ax*e2.by*e3.cz + e1.by*e2.cz*e3.ax + e1.cz*e2.ax*e3.by) - (e3.ax*e2.by*e1.cz + e3.by*e2.cz*e1.ax + e3.cz*e2.ax*e1.by);
    if(det==0){
        printf("\nYour equation is no answer\n\n");
    }
    else{
        float Ax = ((e1.d*e2.by*e3.cz+e1.by*e2.cz*e3.d+e1.cz*e2.d*e3.by)-(e3.d*e2.by*e1.cz+e3.by*e2.cz*e1.d+e3.cz*e2.d*e1.by))/det , Ay =((e1.ax*e2.d*e3.cz+e1.d*e2.cz*e3.ax+e1.cz*e2.ax*e3.d)-(e3.ax*e2.d*e1.cz+e3.d*e2.cz*e1.ax+e3.cz*e2.ax*e1.d))/det , Az = ((e1.ax*e2.by*e3.d+e1.by*e2.d*e3.ax+e1.d*e2.ax*e3.by)-(e3.ax*e2.by*e1.d+e3.by*e2.d*e1.ax+e3.d*e2.ax*e1.by))/det ;
        if(Ax>-0.005&&Ax<=0) Ax=0;
        if(Ay>-0.005&&Ay<=0) Ay=0;
        if(Az>-0.005&&Az<=0) Az=0;
        printf("\nx = %.2f\n",Ax);
        printf("y = %.2f\n",Ay);
        printf("z = %.2f\n\n",Az);
    }
}

int main(){
    int m=1;
    eqn2 e1,e2;
    eqn3 E1,E2,E3;
    do{
        printf("Please select mode\n1.solve equation 2 variables\n2.solve equation 3 variables\nanything else is \"Exit program\"\nMode :");
        scanf("%d",&m);
        printf("\n");
        switch(m){
            case 1:
            sol2(e1,e2);
            break;

            case 2:
            sol3(E1,E2,E3);
            break;
            

            default:
            printf("Exit program");
        
        return 0;

        }

    }while(m==1||m==2);
}