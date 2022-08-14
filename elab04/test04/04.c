#include <stdio.h>

int main()
{
    int inputSize;
    printf("Input Size of Array : ");
    scanf("%d", &inputSize);
    float array[inputSize];
    int i, j;
    for (i = 0; i < inputSize; i++)
    {
        printf("Number %d : ", i + 1);
        scanf("%f", &array[i]);
    }
    printf("\nBefore Sort => ");
    for (i = 0; i < inputSize; i++)
    {
        printf("%.2f ", array[i]);
    }
    printf("\n\n");
    int round = 0;
    for (i = 0; i < inputSize - 1; i++)
    {
        int isSwap = 0;
        for (j = 0; j < inputSize - i - 1; j++)
        {
            if (array[j] < array[j+1])
            {
                float temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                isSwap = 1;
            }
        }
        if(isSwap == 0){
            break;
        }
        printf("Sort # %d => ", round + 1);
        round = round + 1;
        int k;
        for (k = 0; k < inputSize; k++)
        {
            printf("%.2f ", array[k]);
        }
        printf("\n");
    }
    printf("\n--- Sort End ---");
}