#include <stdio.h>
#include <string.h>
#define MAX_INPUT 30
#define MAX_STRING_LENGTH 50

int main(){
    char *sorted[MAX_INPUT],input[MAX_INPUT][MAX_STRING_LENGTH];
    int i,j,k,n,a;
    char temp[MAX_INPUT]={};

    printf("Sorting Word");
    printf("\nInput number of strings: ");
    scanf("%d",&n);
    getchar();
    for(a=0;a<n;a++){
        printf("Input %d:",a+1);
        gets(input[a]);
        for(j=0;input[a][j]!='\0';j++){
            if(input[a][j]>' '&&input[a][j]<'0'||(input[a][j]>'9'&&input[a][j]<'A')||(input[a][j]>'Z'&&input[a][j]<'a')||input[a][j]>'z'){
                printf("Invalid input!");
                return 0;
            }
        }
        sorted[a] = &input[a];
    }
    printf("\nBefore Sorting\n");
    for(i=0;i<n;i++){
        printf("%s\n",sorted[i]);

    }
    for(a=0;a<n;a++){
        for(k=1+a;k<n;k++){
            if(strcmp(input[a],input[k])>0){
                strcpy(temp,input[a]);
                strcpy(input[a],input[k]);
                strcpy(input[k],temp);
            }

        }
        printf("\nAfter Sorting\n");
        for(i=0;i<n;i++){
            printf("%s\n",sorted[i]);
        }
        return 0;
    }

}