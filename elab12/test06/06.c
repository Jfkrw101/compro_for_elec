#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 40
typedef unsigned short dataType;
typedef struct {
   dataType items[MAXQUEUE];
   int front;
   int rear;
} Queue;
int EnQueue (Queue *q, dataType data) {
   if (IsQueueFull(q))              /* เรียกใช้ IsQueueFull()ได้ */
      return 0;                     /*ส่ง 0 กลับถ้าเพิ่มข้อมูลไม่สำเร็จ*/
   q->items[q->rear] = data;        /* ทำการเพิ่ม data เข้าที่ท้ายคิว */
   q->rear = (q->rear +1)%MAXQUEUE; /*ขยับ rearไปยังตำแหน่งถัดไป */
   return 1;                        /*ส่ง 1 เมื่อเพิ่มข้อมูลสำเร็จ*/
};

int DeQueue (Queue *q, dataType *data) {
   if (IsQueueEmpty(q))               /* เรียกใช้ IsQueueEmpty()ได้ */
      return 0;                       /*ส่ง 0 เมื่อไม่มีข้อมูลในคิว */
   *data = q->items[q->front];        /*ดึงข้อมูลตัวแรกเก็บไว้ใน *data */
   q->front = (q->front +1)%MAXQUEUE; /*ขยับ front ไปยังตำแหน่งถัดไป */
   return 1;                          /*ส่ง 1 เมื่อดึงข้อมูลสำเร็จ */
}

int Show Queue(Queue *q){
    if(IsQueueEmpty(q)){
        return 0;
    }
    int i=0;
    do{
        printf("%d\n",q->item[i]);
        i+=1;


    }while(i!=q->rear);
    pritnf("\n");
    return 1;
}