#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j,k;
        int rock_row, rock_col, row, count = 0;
    char x[5][5];
    printf("Cow Game\n\n");

    /*--------------------Fill Full Grass--------------------*/
    for(j = 0;j < 5;j++)
    {
        for(k = 0;k < 5;k++)
        {
            x[j][k] = 'x';
        }
    }

    /*--------------------Main--------------------*/
    do{
        /*--------------------Input--------------------*/
        if(count%2 == 0)
        {
            do{
                printf("Player 1\nEnter the rock's position : ");
                scanf("%dx%d", &rock_row, &rock_col);
                if((rock_row <= 0)||(rock_col <= 0))
                {
                    printf("Input error.Please enter the position again.\n");
                }
                else if((rock_row > 5)||(rock_col > 5))
                {
                    printf("Input error.Please enter the position again.\n");
                }
                else
                {
                    break;
                }
            }while(1);
            do{
                printf("Player 2\nEnter the row of the cow : ");
                scanf("%d", &row);
                if(row <= 0)
                {
                    printf("Input error.Please enter the row again.\n");
                }
                else if(row > 5)
                {
                    printf("Input error.Please enter the row again.\n");
                }
                else
                {
                    break;
                }
            }while(1);

        }
        else
        {
            do{
                printf("Player 2\nEnter the rock's position : ");
                scanf("%dx%d", &rock_row, &rock_col);
                if((rock_row <= 0)||(rock_col <= 0))
                {
                    printf("Input error.Please enter the position again.\n");
                }
                else if((rock_row > 5)||(rock_col > 5))
                {
                    printf("Input error.Please enter the position again.\n");
                }
                else
                {
                    break;
                }
            }while(1);
            do{
                printf("Player 1\nEnter the row of the cow : ");
                scanf("%d", &row);
                if(row <= 0)
                {
                    printf("Input error.Please enter the row again.\n");
                }
                else if(row > 5)
                {
                    printf("Input error.Please enter the row again.\n");
                }
                else
                {
                    break;
                }
            }while(1);
        }

        /*--------------------Rock--------------------*/
        x[rock_row - 1][rock_col - 1] = 'O';

        /*--------------------Remove Grass--------------------*/
        for(j = 0;j < 5;j++)
        {
            if(x[row - 1][j] == 'O')
            {
                break;
            }
            x[row - 1][j] = ' ';
        }
        for(j=0;j<5;j++)
        {
            printf(" ----- ----- ----- ----- ----- \n");
            for(k=0;k<5;k++)
            {
                printf("|  %c  ",x[j][k]);
             }
            printf("|\n");
        }
        printf(" ----- ----- ----- ----- ----- \n");
        for(j = 0;j < 5;j++)
        {
            if((x[row - 1][j] == 'O')||(count == 4))
            {
                if(count == 4)
                {
                    printf("\nPlayer 2 is the winner.");
                    return 0;
                }
                else if(count%2 == 0)
                {
                    printf("\nPlayer 1 is the winner.");
                }
                else
                {
                    printf("\nPlayer 2 is the winner.");
                }
                return 0;
            }
        }

        /*--------------------Reset Rock--------------------*/
        x[rock_row - 1][rock_col - 1] = 'x';
        count++;
    }while(1);
    printf("%d", count);
    return 0;
}
