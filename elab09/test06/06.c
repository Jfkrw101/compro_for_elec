#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char phone[10];
    float gpa;

}Detail;

typedef struct{
    char name[50];
    char ID[4];
    Detail *next;

}student;
void showdata(student *p){
    printf("\nName: %s\n",p->name);
    printf("ID: %s\n",p->ID);
    printf("Phome number : %s\n",p->next->phone);
    printf("GPA : %.2f\n",p->next->gpa);


}
int main(){
    student *p;
    int n,mode,i;
    printf("Enter number of student: ");
    scanf("%d",&n);
    getchar();
    printf("\n");
    p=(student *)malloc(n*sizeof(student));
    for(i=0;i<n;i++){
        p[i].next=(Detail *)malloc(sizeof(Detail));

    }
    for(i=0;i<n;i++){
        printf("Please input %d's student name: ",i+1);
        gets(p[i].name);
        printf("Please input %d's student GPA: ",i+1);
        gets(p[i].next->phone);
        printf("Please input %d's student GPA : ",i+1);
        scanf("%f",&p[i].next->gpa);
        getchar();
        printf("\n");
    }
    printf("Please select mode\n1.Search ID\n2.Search GPA\nMode: ");
    scanf("%d",&mode);

    getchar();
    if(mode == 1){
        int flag1=0;
        char input1[4];
        printf("Enter student ID for searching : ");
        gets(input1);
        for(i=0;i<n;i++){
        if(strcmp(input1,p[i].ID) == 0)
            flag1 = 1;
        }
        if(flag1 == 0)
        printf("ID not found!");
        if(flag1 == 1){
        for(i=0;i<n;i++){
            if(strcmp(input1,p[i].ID) == 0)
            showdata(p+i);
            }
        }
    }
    
    if(mode == 2){
        int flag2=0;
        float input2;
        printf("Enter student GPA for searching : ");
        scanf("%f",&input2);
        getchar();
        for(i=0;i<n;i++){
        if(p[i].next->gpa == input2){
            flag2 = 1;
        }
        }
        if(flag2 == 0)
        printf("\nGPA not found!\n");
        if(flag2 == 1){
        printf("\nGPA found!\n");
        for(i=0;i<n;i++){
            if(p[i].next->gpa == input2)
            showdata(p+i);
        }
        }
    }
}
    





