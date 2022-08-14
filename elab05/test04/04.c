#include <stdio.h>
int strcpyn(int start, int stop, char source[], char destination[]);
int main()
{
        int copy, start, stop, i;
    char string[43] = "Electrical Engineering Kasetsart University";
    printf("string = Electrical Engineering Kasetsart University\n\n");
    printf("Input position start copy : ");
    scanf("%d", &start);
    printf("Input position stop  copy : ");
    scanf("%d", &stop);
    copy = strcpyn(start, stop, "Electrical Engineering Kasetsart University", string);
    if(copy == 1)
    {
        printf("\nAfter copy = ");
        for(i = start;i <= stop;i++)
        {
            printf("%c", string[i]);
        }
    }
    else
    {
        printf("\nCan not to copy because over range");
    }
    }
int strcpyn(int start, int stop, char source[], char destination[])
{
        if((start >= 0)&&(stop <= 42))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
