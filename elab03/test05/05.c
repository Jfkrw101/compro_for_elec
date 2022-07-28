#include<stdio.h>
int main()
{
int a,b,c=0,d,i,f=0,k,j;
printf("n = ");
scanf("%d",&a);
d=a;
k=a;
j=a;
if(a==1)
printf("1 = 1");

else if(a>1)
{
for(i=2;i<=a;i++)
	{
		while(a%i==0)
		{
			a=a/i;
            c++;
		}
    }
		if(c==1)
		{
			printf("%d is prime number",d);
		}
		else if(c>1)
			{
				for(i=2;i<=k;i++)
				{
					while(k%i==0 && f<1)
						{
							k=k/i;
							printf("%d = %d",j,i);
							f++;
						}
					 for(i=i;i<=k;i++)
						{
							while(k%i==0)
								{
									k=k/i;
									printf("x%d",i);
									f++;
								}
						}
				}

			}

}
else if(a<1)
printf("Wrong input\ncan not factoring");
}