#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[80];
    int i,countUP=0,countDown=0,countnum=0;
    printf("Enter string : ");
    gets(text);
    printf("\nThe Uppercase Characters = ");
    for(i=0;i<strlen(text);i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z'){
            printf("%c",text[i]);
            countUP++;
        }
    }
    printf("\nThe Lowercase Characters = ");
    for(i=0;i<strlen(text);i++)
    {
        if(text[i] >= 'a' && text[i] <= 'z'){
            printf("%c",text[i]);
            countDown++;
        }
    }
    printf("\nThe Number = ");
    for(i=0;i<strlen(text);i++)
    {
        if(text[i] >= '0' && text[i] <= '9'){
            printf("%c",text[i]);
            countnum++;
        }
    }
    printf("\nThe number of uppercases = %d",countUP);
    printf("\nThe number of lowercases = %d",countDown);
    printf("\nThe number of numbers = %d",countnum);
return 0;
}