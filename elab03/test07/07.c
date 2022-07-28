#include<stdio.h>
#include<math.h>
int main()
{
float x,m=0,n,i,cos=0,c=0,j,k=1;
printf("Input x : ");
scanf("%f",&x);
printf("Input n : ");
scanf("%f",&n);
	for(i=0;i<=n-1;i++)
	{
		c=(pow(x,2*i))*(pow(-1,i));
		for(j=1;j<=2*i;j++)
		{
			k=k*j;
			
		}
        m=c/k;
		k=1;
        cos+=m;
	}
printf("cos(%.2f) = %.3f rad\n",x,cos);
}