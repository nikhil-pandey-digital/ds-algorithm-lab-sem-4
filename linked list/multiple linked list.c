#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};


struct node * getnode(void)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
int freenode(struct node *p)
{
    free(p);
}
void insbeg(struct node **s,int x)
{
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=*s;
    *s=p;
}
void insafter(struct node **q,int x)
{
    struct node *p,*r;
    p=getnode();
    p->info=x;
    r=(*q)->next;
    p->next=r;
    (*q)->next=p;
}
 int delaft(struct node **q,int x)
{  struct node *p,*r;

    p=(*q)->next;
    r=p->next;
    (*q)->next=r;
    x=p->next;
    freenode(p);
    return x;
}
    void traverse(struct node *s)
    {
        struct node *q;
        q=s;
        while(q!=NULL)
        {
            printf("%d ",q->info);
            q=q->next;
        }
    }
 int    search (struct node *s,int x)
    {
        struct node *t;
        t=s;
        while(t->info!=x)
        {
            t=t->next;
        }
        return t;
    }
    void main()
    {
        struct node *start=NULL,*t;
        insbeg(&start,100);
         insbeg(&start,200);
          insbeg(&start,300);
           insbeg(&start,400);
            insbeg(&start,500);
             insbeg(&start,600);

        traverse(start);
        printf("\n");
        t=search(start,600);
       insafter(&t,550);
       traverse(start);
         printf("\n");

         t=search(start,300);
        delaft(&t,200);
        traverse(start);
        printf("\n");


    }
