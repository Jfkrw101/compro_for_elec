#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter date(d/m/y) : ");
    scanf("%d/%d/%d",&a,&b,&c);
    printf("The date is %d/%d/%d",a,b,c);

    if(((c%400)==0)&&((c%4)==0)){
        printf("\n%d is leap year.",c);
        if((a<=31)&&(b<=12)&&(b%2==0)&&(b!=2)){
            printf("\n%d days left until next month",32-a);
        }
        else if((a<=29)&&(b<=12)&&(b==2)){
            printf("\n%d days left until next month",30-a);
        }
        else if((a<=30)&&(b<=12)&&(b%2!=0)){
            printf("\n%d days left until next month",31-a);
        }
        else if(b>12){
            printf("\nYour month must be between 1-12");

        }
        else if((a>29)&&(b<=12)&&(b==2)){
            printf("\nYour day must be between 1-29");
        }
        
    }
    else if(((c%4)==0)&&((c%100)!=0)){
        printf("\n%d is leap year.",c);
        if((a<=31)&&(b<=12)&&(b%2==0)&&(b!=2)){
            printf("\n%d days left until next month",32-a);
        }
        else if((a<=29)&&(b<=12)&&(b==2)){
            printf("\n%d days left until next month",30-a);
        }
        else if((a<=30)&&(b<=12)&&(b%2!=0)){
            printf("\n%d days left until next month",31-a);
        }
        else if(b>12){
            printf("\nYour month must be between 1-12");

        }
        else if((a>29)&&(b<=12)&&(b==2)){
            printf("\nYour day must be between 1-29");
        }
    }
    
    else{
        printf("\n%d is normal year.",c);
        if((a<=31)&&(b<=12)&&(b%2==0)&&(b!=2)){
            printf("\n%d days left until next month",32-a);

        }
        else if((a<=28)&&(b<=12)&&(b==2)){
            printf("\n%d days left until next month",29-a);
        }
        else if((a<=30)&&(b<=12)&&(b%2!=0)){
            printf("\n%d days left until next month",31-a);
        }
        else if(b>12){
            printf("\nYour month must be between 1-12");
        }
        else if((a>28)&&(b<=12)&&(b==2)){
            printf("\nYour day must be between 1-28");
        }
    }
    return 0;




}