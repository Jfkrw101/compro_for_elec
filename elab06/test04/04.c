#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char word[100],*ptr,input;
  int count,i;
  printf("Enter the word: ");
  gets(word);
  do{
    printf("Enter the letter: ");
    scanf("%c",&input);
    ptr=word;
    count=0;
    if(input=='-'){
      printf("Exit");
      break;
    }else{
      for(i=0;i<strlen(word);i++){
        if(*ptr==input || *ptr==input-32||*ptr==input+32){
          count++;
        }
        ptr++;
      }
      printf("Has %d of %c \n",count,input);
    }
  }while(1);
}


