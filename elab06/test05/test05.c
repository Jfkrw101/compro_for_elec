#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 500

void reverseString(char *str);

int main(){
    char *pinput;
    char str[MAX_STRING_LENGTH];
    printf("Input string: ");
    gets(str);
    pinput=str;
    reverseString(pinput);
    printf("Reversed string: %s\n",pinput);


}

void reverseString(char *str){
    int i,j,temp;
    for(j=1;j<strlen(str);j++){
        for(i=0;i<strlen(str)-j;i++){
            temp=str[i+1];
            str[i+1]=str[i];
            str[i]=temp;
        }
    }
    

}