#include <stdio.h>
#include <stdlib.h>
void display(int**);
int CheckandMove(int,int**);
int complete(int**);

void display(int** a)
{
/*เขียนฟังก์ชันเพื่อแสดงตารางปัจจุบัน*/
    int i,j;
    for (i=0;i<4;i++){
        printf(" ----- ----- ----- -----\n|");
        for(j=0;j<4;j++){
            if(a[i][j]==0)
                printf("     |");
            if(a[i][j]<10&&a[i][j]!=0)
                printf("%3d  |",a[i][j]);
            if(a[i][j]>=10)
                printf("%4d |",a[i][j]);
        }
        printf("\n");
    }
    printf(" ----- ----- ----- -----\n");
}
int CheckandMove(int b,int** a)
{
/*เขียนฟังก์ชันเพื่อทำการตรวจสอบว่า input ดังกล่าว สามารถขยับได้หรือไม่*/
int temp,i,j,si,sj;
    if(b>=1&&b<=15){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(b == a[i][j]){
                    si = i;
                    sj = j;
                    break;
                }
            }
        }
        if(si==0&&sj==0){//a[0][0]
            if(a[si+1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si+1][sj];
                a[si+1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si][sj+1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj+1];
                a[si][sj+1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else{
                printf("Can't move your number");
                return 0;
            }
        }
        else if(si==0&&sj==3){//a[0][3]
            if(a[si+1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si+1][sj];
                a[si+1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si][sj-1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj-1];
                a[si][sj-1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else{
                printf("Can't move your number");
                return 0;
            }
        }
        else if(si==3&&sj==3){//a[3][3]
            if(a[si-1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si-1][sj];
                a[si-1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si][sj-1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj-1];
                a[si][sj-1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else{
                printf("Can't move your number");
                return 0;
            }
        }
        else if(si==3&&sj==0){//a[3][0]
            if(a[si-1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si-1][sj];
                a[si-1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si][sj+1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj+1];
                a[si][sj+1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else{
                printf("Can't move your number");
                return 0;
            }
        }
        else if(si==0&&sj!=3&&sj!=0){//a[0][1,2]
            if(a[si+1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si+1][sj];
                a[si+1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si][sj-1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj-1];
                a[si][sj-1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si][sj+1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj+1];
                a[si][sj+1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else{
                printf("Can't move your number");
                return 0;
            }
        }
        else if(si!=0&&si!=3&&sj==0){//a[1,2][0]
            if(a[si+1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si+1][sj];
                a[si+1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si-1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si-1][sj];
                a[si-1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si][sj+1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj+1];
                a[si][sj+1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else{
                printf("Can't move your number");
                return 0;
            }
        }
        else if(si==3&&sj!=3&&sj!=0){//a[3][1,2]
            if(a[si][sj-1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj-1];
                a[si][sj-1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si-1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si-1][sj];
                a[si-1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si][sj+1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj+1];
                a[si][sj+1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else{
                printf("Can't move your number");
                return 0;
            }
        }
        else if(si!=0&&si!=3&&sj==3){//a[1,2][3]
            if(a[si][sj-1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj-1];
                a[si][sj-1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si-1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si-1][sj];
                a[si-1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si+1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si+1][sj];
                a[si+1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else{
                printf("Can't move your number");
                return 0;
            }
        }
        else if(si!=0&&si!=3&&sj!=0&&sj!=3){//a[1,2][1,2]
            if(a[si][sj-1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj-1];
                a[si][sj-1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si][sj+1]==0){
                temp = a[si][sj];
                a[si][sj] = a[si][sj+1];
                a[si][sj+1] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si-1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si-1][sj];
                a[si-1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else if(a[si+1][sj]==0){
                temp = a[si][sj];
                a[si][sj] = a[si+1][sj];
                a[si+1][sj] = temp;
                printf("\n");
                display(a);
                return 1;
            }
            else{
                printf("Can't move your number");
                return 0;
            }
        }
    }
    else if(b==0){
        printf("Exit.");
        exit(0);
    }
    else{
        printf("Can't move your number");
        return 0;
    }
}
int complete(int** a)
{
/*เขียนฟังก์ชันเพื่อตรวจสอบว่าเลขเรียงถูกต้องหรือยัง*/
    int i,j,x=0,**c;
/*ทำการจองพื้นที่หน่วยความจำสำหรับตัวแปร c*/
    c = (int**)malloc(4*sizeof(int*));
    for(i=0;i<4;i++){
        c[i] = (int*)malloc(4*sizeof(int));
    }
    c[0][0] = 1;    c[0][1] = 2;    c[0][2] = 3;     c[0][3] = 4;
    c[1][0] = 5;    c[1][1] = 6;    c[1][2] = 7;     c[1][3] = 8;
    c[2][0] = 9;    c[2][1] = 10;   c[2][2] = 11;    c[2][3] = 12;
    c[3][0] = 13;   c[3][1] = 14;   c[3][2] = 15;    c[3][3] = 0;
    if(a[0][0]==c[0][0]&&a[0][1]==c[0][1]&&a[0][2]==c[0][2]&&a[0][3]==c[0][3]&&
   a[1][0]==c[1][0]&&a[1][1]==c[1][1]&&a[1][2]==c[1][2]&&a[1][3]==c[1][3]&&
   a[2][0]==c[2][0]&&a[2][1]==c[2][1]&&a[2][2]==c[2][2]&&a[2][3]==c[2][3]&&
   a[3][0]==c[3][0]&&a[3][1]==c[3][1]&&a[3][2]==c[3][2]&&a[3][3]==c[3][3]){
      x=0;
   }
   else{
      x=1;
   }
   return x;
   for(i=0;i<4;i++){
       free(c[i]);
    }
    free(c);
}
void main()
{
    int b,count=0,i,**a;
/*ทำการจองพื้นที่หน่วยความจำสำหรับตัวแปร a*/
a = (int**)malloc(4*sizeof(int*));
for(i=0;i<4;i++)
    a[i] = (int*)malloc(4*sizeof(int));
     /*ส่วนนี้ เป็นส่วนของโปรแกรมสำหรับการสุ่มค่าเริ่มต้นของ pointer to pointer a*/
    srand(time(0));
    int j,k,l,check;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            a[i][j] = 0;
    }
    for(i=0;i<4;i++)
    {
        for(j=0,check=1;j<4;j++)
        {
            while(check)
            {
                check = 0;
                a[i][j] = rand()%16;
                for(k=0;k<=i;k++)
                {
                    for(l=0;(k==i&&l<j)||(k<i&&l<4);l++)
                        if(a[k][l]==a[i][j])
                        {
                            check = 1;
                            break;
                        }
                    if(check)   break;
                }
            }
            check = 1;
        }
    }
    display(a);
    int x,point,scan=1;
    while(1){
        printf("\nInput number you want to move : ");
        scanf("%d",&b);
        point = CheckandMove(b,a);
       // a[0][0]=1,a[0][1]=2,a[0][2]=3,a[0][3]=4,
       //a[1][0]=5,a[1][1]=6,a[1][2]=7,a[1][3]=8, 
       //a[2][0]=9,a[2][1]=10,a[2][2]=11,a[2][3]=12,
       //a[3][0]=13,a[3][1]=14,a[3][2]=15,a[3][3]=0;
        //display(a);
        count = count+point;
        x = complete(a);
        //printf("\npoint = %d\n",point);
        //printf("\ncount = %d",count);
        if(x==0)
            break;
    }
    printf("Your move is %d times\n",count);
    printf("Your puzzle is complete");
    /*พื้นที่สำหรับทำการ free พื้นที่หน่วยความจำของตัวแปร a*/
    for(i=0;i<4;i++){
        free(a[i]);
    }
    free(a);

    
}