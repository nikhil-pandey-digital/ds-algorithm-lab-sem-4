#include<stdio.h>
#include<mylinkedlist.h>
#define TRUE 1
#define FALSE 0
void initialize(struct node **front,struct node **rear)
{
    *front=NULL;
    *rear=NULL;
}
/*******************************************************/
int isempty(struct node **front,struct node **rear)
{
    if(*front==NULL)
        return TRUE;
    else
        return FALSE;
}
/*****************************************************************/
void enqueue(struct node **front,struct node **rear,int x)
{
    if(*rear!=NULL)
    {
     InsAfter(&(*rear),x);
     *rear=(*rear)->next;
    }
    else
    {
        InsBeg(&(*rear),x);
        *front=*rear;
    }
}
int dequeue(struct node **front,struct node **rear)
{int x;
    if(isempty(&(*front),&(*rear)))
    {
        printf("queue underflows");
          exit(1);
    }
    else
    {
        x=DelBeg(&(*front));
        if(*front==NULL)
            *rear=NULL;
    }
    return x;
}
/****************************************************/
int main()
{
    struct node *front=NULL,*rear=NULL,*t;
    initialize(&front,&rear);
    enqueue(&front,&rear,100);
    enqueue(&front,&rear,200);
    enqueue(&front,&rear,300);
    enqueue(&front,&rear,400);
    Traverse(front);
    printf("\n");
    dequeue(&front,&rear);
     Traverse(front);
     printf("\n");
     dequeue(&front,&rear);
     Traverse(front);
    printf("\n");}
