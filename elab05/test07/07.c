#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double BN(int A, int N);
int Ncha(int A,int B);
int Ncha(int A,int B){
  int N=1;
  do{
    if(BN(A,N)*100.0<=B){
      return N;
    }
    else 
      N++;
  }while(1);
}
double BN(int A, int N) /*หากไม่ใช้ฟังก์ชั่นที่กำหนดให้ จะส่งไม่ผ่าน*/
{
    if(N==0){
  return 1;
}
else
  return(A*BN(A,N-1))/(N+(A*BN(A,N-1)));
}
int main()
{
    int i,A,B;
    printf("Input A: ");
    scanf("%d",&A);
    printf("Input B: ");
    scanf("%d",&B);
    i = Ncha(A,B);
    printf("Number of channel needed is %u \nfor %d Erlang with %d %%  block rate\n",i,A,B); /*ค่า i คือจำนวน channel ที่ต้องการ ให้คำนวณจากช่องว่างด้านบน*/
    return 0;
}

