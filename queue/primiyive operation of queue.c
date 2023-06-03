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
struct queue q;
void initialize(void)
{
    q.rear=-1;
    q.front=0;
}
 int isempty(void)
    {
        if(q.rear-q.front+1==0)
            return TRUE;
        else
            return FALSE;
    }
void  enqueue(int x)
{
    if(q.rear==maxsize-1)
       {
           printf("queue overflows");
         exit(1);
       }
        q.rear=q.rear+1;
     q.item[q.rear]=x;
}
    int dequeue(void)
    { int x;
        if (isempty())
        {
            printf("queue underflows");
            exit(1);
        }
            x=q.item[q.front];
            q.front=q.front+1;
            return x;
    }


    void main()
    { int y,i;
    initialize();
    enqueue(100);
  enqueue(200);
  y=dequeue();
  printf("\ndeleted value:=>%d\n",y);



}


