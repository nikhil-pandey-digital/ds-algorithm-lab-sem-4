#include<stdio.h>
#include<mylinkedlist.h>
#define TRUE 1
#define FALSE 0
struct node
{

    struct node  *data;
     int data;
    struct node  *left;
    struct node  *next;
    struct node *right;
};
struct node *Getnode(char x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void initialize(struct node **q)
{
    struct node **front,**rear;
    *front=NULL;
    *rear=NULL;
}
/*******************************************************/
int isempty(struct node **q)
{
    struct node **front,**rear;
    if(*front==NULL)
        return TRUE;
    else
        return FALSE;
}
/*****************************************************************/
void enqueue(struct node **q,int x)
{
    struct node **front,**rear;
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
int dequeue(struct node **q)
{int x;
struct node **front,**rear;
    if(isempty(&q))
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
void LOT(struct node *T)
{int q,x;
    Queue(q);
    initialize(&(q));
    enqeueue((*q),T);
    while(!=isempty(&(q)))
          {
              x=dequeue((&q));
              if(x->left!=NULL)
                enqueue(&q,x->left);
              if(x->right!=NULL)
                 enqueue(&q,x->right);
              printf("%d",x->info);
          }

}
/****************************************************/
int main()



