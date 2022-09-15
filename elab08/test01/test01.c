#include <stdio.h>
#include <stdlib.h>




int main(){
    char *ptr[4];
    ptr[0]=(char *)malloc(sizeof(char));
    ptr[1]=(char *)malloc(sizeof(char));
    ptr[2]=(char *)malloc(sizeof(char));
    ptr[3]=NULL;
    printf("Input *ptr[0]: ");
    gets(ptr[0]);
    printf("Input *ptr[1]: ");
    gets(ptr[1]);
    printf("Input *ptr[2]: ");
    gets(ptr[2]);
    printf("*ptr[0] = %c\n", *ptr[0]);
    printf("*ptr[1] = %s\n", ptr[1]);
    printf("*ptr[2] = %s\n", ptr[2]);
    printf("ptr[3]  = %d\n", ptr[3]);

    free(ptr[0]);
    free(ptr[1]);
    free(ptr[2]);

    return 0;





}