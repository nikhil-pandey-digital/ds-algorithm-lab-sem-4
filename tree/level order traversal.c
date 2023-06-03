#include<stdio.h>
#define TRUE 1
#define FALSE 0
struct node
{
     struct node  *data;
    int data1;
    struct node  *left;
     struct node  *next;
    struct node *right;
};
struct node *getnode(int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
struct node1 *GetNode()
{
   struct node *p;
   p=(struct node*)malloc(sizeof(struct node));
   return p;
}
void InsBeg(struct node **S,int x)
{
    struct node *p;
    p=GetNode();
    p->data=x;
    p->next=*S;
    *S=p;
}
/********************************************/
void InsAfter(struct node **q,int x)
{
    struct node *p;
    p=GetNode();
    p->data=x;
    p->next=(*q)->next;
    (*q)->next=p;
}
/**********************************************************/
int DelBeg(struct node **S)
{
    int x;
    struct node *p;
    p=*S;
    x=p->data;
    (*S)=(*S)->next;
    free(p);
    return x;
}
/***********************************************************/
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
{struct node* x;
int q;
    initialize(&(q));
    enqueue((q),T);
    while(!isempty(&(q)))
          {
              x=dequeue((&q));
              if(x->left!=NULL)
                enqueue(&q,x->left);
              if(x->right!=NULL)
                 enqueue(&q,x->right);
              printf("%d",x->data1);
          }

}
/****************************************************/
void CreateTree(struct node **T)
{
    int choice,x;
    struct node *p;
    if((*T)==NULL)
    {
      printf("Enter the Data of root node:\n");
      scanf("%d",&x);
      (*T)=getnode(x);
       CreateTree(T);
    }
    else
    {
        printf("Whether the left of %d exists?(1/0)",(*T)->data);
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Input the data of left of %d:=>",(*T)->data);
            scanf("%d",&x);
            p=getnode(x);
            (*T)->left=p;
            CreateTree(&p);
        }
        printf("Whether the right of %d exists?(1/0)",(*T)->data);
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Input the data of right of %d:=>",(*T)->data);
            scanf("%d",&x);
            p=getnode(x);
            (*T)->right=p;
            CreateTree(&p);
        }
    }
}
int main()
{
    struct node1 *F = NULL, *rear = NULL;
    struct node1 *root;
    root = NULL;
 CreateTree(&root);
    LOT(root);
}


