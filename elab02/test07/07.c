#include<stdio.h>

int main()
{

   unsigned int Temp ;
   printf("Enter Temp. code : ");
   scanf("%u",&Temp);
  //first method to solve
   /*int t1,t2,t3;
   t1=Temp<<22;
   t1=t1>>22;
   t2=((Temp>>10)<<22);
   t2=t2>>22;
   t3=((Temp>>20)<<22);
   t3=t3>>22;
   printf("Current Temp. is %u\n",t3);
   printf("Minimum Temp. is %u\n",t2);
   printf("Maximum Temp. is %u\n",t1);*/

  //second method very compact
   printf("Current Temp. is. %d\n",((Temp>>20)<<22)>>22);
   printf("Minimum Temp. is %d\n",(Temp<<12)>>22);
   printf("Maximum Temp. is %d\n",(Temp<<22)>>22);
   return 0;
}