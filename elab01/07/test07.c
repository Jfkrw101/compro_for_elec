#include<stdio.h>
int main()
{
double a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;

printf("Please input for the first item: Number, Price, Amount, Percent discount\n");
scanf("%lf, %lf, %lf, %lf",&a,&b,&c,&d);
printf("Please input for the second item: Number, Price, Amount, Percent discount\n");
scanf("%lf, %lf, %lf, %lf",&e,&f,&g,&h);
printf("Please input for the third item: Number, Price, Amount, Percent discount\n");
scanf("%lf, %lf, %lf, %lf",&i,&j,&k,&l);

printf("\nLists");
printf("\nItem   Number    Price      Amount      Sum     Discount   Final Sum");

printf("\n1      ");
//number1
printf("%06.0lf",a);
//price
printf("%9.0lf",b);
//amount
if(c>99999)
printf("      %.0lf",c);
else if(c<=99999 && c>9999)
printf("      %.0lf ",c);
else if(c<=9999 && c>999)
printf("      %.0lf  ",c);
else if(c<=999 && c>99)
printf("      %.0lf   ",c);
else if(c<=99 && c>9)
printf("      %.0lf    ",c);
else
printf("      %.0lf     ",c);
//sum
printf("%9.0lf",b*c);
//discount
printf("%13.2lf",(b*c*d*-1)/100);
//final sum
printf("%12.2lf\n",(b*c)+(b*c*d*-1)/100);
m=(b*c)+(b*c*d*-1)/100;

printf("2      ");
//number2
printf("%06.0lf",e);
//price
printf("%9.0lf",f);
//amount
if(g>99999)
printf("      %.0lf",g);
else if(g<=99999 && g>9999)
printf("      %.0lf ",g);
else if(g<=9999 && g>999)
printf("      %.0lf  ",g);
else if(g<=999 && g>99)
printf("      %.0lf   ",g);
else if(g<=99 && g>9)
printf("      %.0lf    ",g);
else
printf("      %.0lf     ",g);
//sum
printf("%9.0lf",f*g);
//discount
printf("%13.2lf",(f*g*h*-1)/100);
//final sum
printf("%12.2lf\n",(f*g)+(f*g*h*-1)/100);
n=(f*g)+(f*g*h*-1)/100;

printf("3      ");
//number3
printf("%06.0lf",i);
//price
printf("%9.0lf",j);
//amount
if(c>99999)
printf("      %.0lf",k);
else if(k<=99999 && k>9999)
printf("      %.0lf ",k);
else if(k<=9999 && k>999)
printf("      %.0lf  ",k);
else if(k<=999 && k>99)
printf("      %.0lf   ",k);
else if(k<=99 && k>9)
printf("      %.0lf    ",k);
else
printf("      %.0lf     ",k);
//sum
printf("%9.0lf",j*k);
//discount
printf("%13.2lf",(j*k*l*-1)/100);
//final sum
printf("%12.2lf\n",(j*k)+(j*k*l*-1)/100);
o=(j*k)+(j*k*l*-1)/100;

//grand total
printf("                                             Grand Total%12.2lf\n",(m+n+o));

}