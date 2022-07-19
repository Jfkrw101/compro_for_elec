#include<stdio.h>
#include<stdlib.h>
int main()
{
   float R1,R2,V;
   printf("R1 = ");
   scanf("%f",&R1);
   printf("R2 = ");
   scanf("%f",&R2);
   printf("V = ");
   scanf("%f",&V);
   printf("\n");

   printf("R1 and R2 connected in series \n");
   printf("R1 : %-9.2fR2 : %-9.2fR total : %6.2f\n",R1,R2,R1+R2);
   printf("V1 : %-9.2fV2 : %-9.2fV total : %6.2f\n",(R1/(R1+R2))*V,(R2/(R1+R2))*V,V);
   printf("I1 : %-9.2fI2 : %-9.2fI total : %6.2f\n\n",V/(R1+R2),V/(R1+R2),V/(R1+R2));
   
   printf("R1 and R2 connected in parallel \n");
   printf("R1 : %-9.2fR2 : %-9.2fR total : %6.2f\n",R1,R2,(R1*R2)/(R1+R2));
   printf("V1 : %-9.2fV2 : %-9.2fV total : %6.2f\n",V,V,V);
   printf("I1 : %-9.2fI2 : %-9.2fI total : %6.2f\n",V/R1,V/R2,(V*(R1+R2))/(R1*R2));

   return 0;
}