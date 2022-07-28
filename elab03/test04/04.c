#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c=0,i;
printf("Please input first number : ");
scanf("%d",&a);
printf("Please input second number : ");
scanf("%d",&b);
//GCD
for(i=1;i<=a;i++)
{
	if(a%i==0 && b%i==0)
	{
		c=i; 
	}
}
printf("\nThe greatest common divisor is %d\n",c);

//LCM
printf("The least common multiple is %d",abs((a*b)/c));
}