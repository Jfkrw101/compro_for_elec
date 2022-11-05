#include <stdio.h>
#include <stdlib.h>

int Play(char **word,int ran){
    int l=-1,life=6,i,j,c,nowc=0;
while (word[ran][++l]);
char hint[l],a=0,wc[5]={32,32,32,32,32};
for (i=0;i<l;i=i+1){
    hint[i]='_';
}
while (life>0){
    if (a!=0){
        printf("\n");
    }
    for (i=0;i<l;i=i+1){
        printf("%c ",hint[i]);
    }
    printf("\nlife left : %d\n",life);
    printf("Wrong Character : ");
    for (i=0;i<5;i=i+1){
        printf("%c ",wc[i]);
    }
    printf("\nInput Character : ");
    scanf("%c",&a);getchar();
    c=0;
    for (i=0;i<l;i=i+1){
        if (a==word[ran][i]){
            hint[i]=a;
            c=1;
        }
    }
    if (c==0){
        wc[nowc]=a;
        nowc=nowc+1;
        life=life-1;
    }
    for (i=0;i<l;i=i+1){
        if(word[ran][i]!=hint[i]){
            break;
        }else if (i==l-1){
            return life;
        }
    }
}
return life;

}

int main(){
    time_t t;
    srand((unsigned) time(&t));
    int ran = rand()%15; //ทำการสุ่มคำศัพท์
    int i,check;
    char temp;
    char **word = (char**)malloc(15*sizeof(char*));
    for(i=0;i<15;i++)
        word[i]=(char*)malloc(15*sizeof(char));
    strcpy(word[0] ,"DROUP");
    strcpy(word[1] ,"STUPID");
    strcpy(word[2] ,"BODYSLAM");
    strcpy(word[3] ,"SHOWTIME");
    strcpy(word[4] ,"TRADITION");
    strcpy(word[5] ,"ENGINEER");
    strcpy(word[6] ,"FISH");
    strcpy(word[7] ,"FREQEUNCY");
    strcpy(word[8] ,"DIGITAL");
    strcpy(word[9] ,"GANGBANG");
    strcpy(word[10],"RETIRE");
    strcpy(word[11],"LUBRICANT");
    strcpy(word[12],"TELEPORT");
    strcpy(word[13],"UNITEDT");
    strcpy(word[14],"ANT");

    check = Play(word,ran);
    printf("\n");
    if(check == 0 )printf("Dead!!!");
    else{
        printf("Correct\n\n");
        printf("\"%s\"",word[ran]);
    }
    return 0;

}