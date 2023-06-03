#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define maxsize 10
struct queue
{
    int item[maxsize];
    int rear;
    int front;

};
typedef struct queue queue;
void initialize(queue *q)
{
    q->rear=-1;
    q->front=0;
}
 int isempty(queue *q)
    {
        if(q->rear-q->front+1==0)
            return TRUE;
        else
            return FALSE;
    }
void  enqueue(queue *q,int x)
{
    if(q->rear==maxsize-1)
       {
           printf("queue overflows");
         exit(1);
       }
        q->rear=q->rear+1;
     q->item[q->rear]=x;
}
    int dequeue(queue *q)
    { int x;
        if (isempty(q))
        {
            printf("queue underflows");
            exit(1);
        }
            x=q->item[q->front];
            q->front=q->front+1;
            return x;
    }
void push(queue *q1,queue *q2,int x)
{ queue temp;
    enqueue(q2,x);
    while(!isempty(q1))
    {int y;
       y=dequeue(q1);
       enqueue(q2,y);
    }
    temp=*q1;
    *q1=*q2;
    *q2=temp;
}
int pop(queue *q1,queue *q2)
{int x;
    x=dequeue(q1);
    return x;
}
    void main()
    { int y,i;
    queue q1,q2;
    initialize(&q1);
     initialize(&q2);
   push(&q1,&q2,1);
     push(&q1,&q2,2);
       push(&q1,&q2,3);
         push(&q1,&q2,4);

  y=pop(&q1,&q2);
  printf("\ndeleted value:=>%d\n",y);
y=pop(&q1,&q2);
  printf("\ndeleted value:=>%d\n",y);



}



