#include<stdio.h>
int main()
{
    int items,i,j,k,s,t=0;
    float price[999],total,min_priceT=0;
    printf("How many items to buy : ");
    scanf("%d",&items);
    if(items%5==0) /*every 5 items*/
        {
            printf("You can get %d item free\n",items/5);
            printf("Now you have %d items to buy\n",items+(items/5));
            items +=items/5;
        }
    for(i=0;i<items;i++)
    {
        printf("Enter price %d : ",i+1);
        scanf("%f",&price[i]);
        total +=price[i];
    }
    if(items>5)
    {
        for(j=0;j<items/5;j++)
        {
            for(i=0;i<items-1;i++)
            {
                for(k=0;k<items-i-1;k++) //sorted min=>max
                {
                    if(price[k]>price[k+1])
                    {
                        s = price[k];
                        price[k] = price[k+1];
                        price[k+1] = s;
                    }
                }
            }
            min_priceT += price[t]; //min price number 1=>n
            t+=1;
        }
        printf("Free %.2f baht ,and pay %.2f baht",min_priceT,total-min_priceT);
    }
    else
    {
        printf("Pay %.2f baht",total);
    }
} 