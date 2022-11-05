#include <stdio.h>
#define MAX 3
typedef struct _node{
        int data;
        struct _node *next;
}node;

typedef struct _stack{
        int count;
        node *top;
}Stack;
node* GetNode(int);
Stack* CreateStack();
int IsStackEmpty(Stack*);
int Push(Stack*,int);
int Pop(Stack*,int*);
void display(Stack**);
void intial(Stack**);
int checkMove(Stack**,int,int);
int complete(Stack**);

void main()
{
    Stack *T[3];
    intial(T);
    display(T);
    int sou,des;
    int round=0;
    do{
    printf("Input :");
    scanf("%d,%d",&sou,&des);
    if(checkMove(T,sou,des)){
        round++;
        display(T);}
    else
        printf("Can't move\n");

    }while(complete(T));
    printf("Your move is %d times\n",round);
    printf("Congratulation");
}

//ฟังก์ชันนี้ใช้ตรวจสอบว่าย้ายฝั่งครบหรือยัง
int complete(Stack **T){
        int i,success = 1;
    node *temp;
    if(T[2]->count == 3)
    {
        temp = T[2]->top;
        for(i = 0;i < MAX;i++)
        {
            if(temp->data == 0) // 1 Times
            {
                temp = temp->next;
            }
            else if(temp->data == 1) // 2 Times
            {
                temp = temp->next;
            }
            else if(temp->data == 2) // 3 Times
            {
                success = 0;
                break;
            }
        }
    }
    return success;
}


//ฟังก์ชั่นนี้ใช้ตรวจสอบว่าสามารถย้ายฝั่งได้หรือไม่โดยถ้า stack ว่างหรือผิดเงื่อนไขการย้ายฝั่งจะ return 0 แต่ถ้าย้ายฝั่งได้จะทำการย้ายฝั่งแล้ว return 1


int checkMove(Stack **T,int sou,int des){
    int ValuePop;
    node *temp_des, *temp_sou;
    temp_sou = T[sou - 1]->top;
    temp_des = T[des - 1]->top;
    if(T[des - 1]->count == 0)
    {
        Pop(T[sou - 1], &ValuePop);
        Push(T[des - 1], ValuePop);
        return 1;
    }
    else if(temp_sou->data < temp_des->data)
    {
        Pop(T[sou - 1], &ValuePop);
        Push(T[des - 1], ValuePop);
        return 1;
    }
    return 0;

}

//ฟังก์ชั่นแสดงผลลัพท์
void display(Stack **T)
{
    node *temp1=T[0]->top,*temp2=T[1]->top,*temp3=T[2]->top;
    int count1 = T[0]->count , count2 = T[1]->count , count3 = T[2]->count;
    int i;
    printf("\n");
    for(i=MAX;i>0;i--)
    {
        printf("\t |");
            if(count1 == i){
                printf("%d",temp1->data);
                temp1 = temp1->next;
                count1--;}
            else
                printf(" ");
        printf("|   |");
            if(count2 == i){
                printf("%d",temp2->data);
                temp2 = temp2->next;
                count2--;}
            else
                printf(" ");
        printf("|   |");
            if(count3 == i){
                printf("%d",temp3->data);
                temp3 = temp3->next;
                count3--;}
            else
                printf(" ");
        printf("|   \n");
    }
    printf("\t-----------------\n\n");

}

//ฟังก์ชั่นนี้ใช้ในการกำหนดค่าเริ่มต้นของแกน (2,1,0)
void intial(Stack **T){
    int i, j;
    for(i = 0;i < MAX;i++)
    {
        T[i] = CreateStack();
        if((i == 0)&&T[0] != 0)
        {
            for(j = 2;j > -1;j--) //set value 1
            {
                Push(T[0], j);
            }
        }
    }

}


