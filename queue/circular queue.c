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
struct queue cq;
void initialize(void)
{
    cq.rear=maxsize-1;
    cq.front=maxsize-1;
}
 int isempty(void)
    {
        if(cq.rear==cq.front)
            return TRUE;
        else
            return FALSE;
    }
void  enqueue(int x)
{
    if((cq.rear+1)%maxsize==cq.front)
       {
           printf("queue overflows");
         exit(1);
       }
       else
        {
        cq.rear=(cq.rear+1)%maxsize;
     cq.item[cq.rear]=x;
}}
    int dequeue(void)
    { int x;
        if (isempty())
        {
            printf("queue underflows");
            exit(1);
        }
        else
           {
               cq.front=(cq.front+1)%maxsize;
             x=cq.item[cq.front];
            return x;
           }
    }


    void main()
    { int y,i;
    initialize();
  enqueue(100);
  enqueue(200);
  y=dequeue();
  printf("\ndeleted value:=>%d\n",y);



}


