#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start;

int getnode(void)
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
void traverse()
    {
        struct node *q;
        q=start;
        while(q!=NULL)
        {
            printf("%d ",q->info);
            q=q->next;
        }
    }
     delaft(struct node **q)
{  struct node *p,*r;
int x;
    p=(*q)->next;
    r=p->next;
    (*q)->next=r;
    x=p->info;
    freenode(p);
    return x;
}
int delbeg(struct node **s)
{
    struct node *p;
    int x;
    p=*s;
    x=p->info;
    (*s)=(*s)->next;
    freenode(p);
    return x;
}
delocc(struct node **s,int x)
{struct node *p,*q;
p=*s;
q=NULL;
    while(p!=NULL)
    {
        if(p->info==x)
        {
            p=p->next;
            if(q==NULL)
            {
                delbeg(s);
            }
            else
            {
                delaft(&q);
            }
        }
        else
            q=p;
        p=p->next;
    }
}
  void main()
    {
        start=NULL;
        insbeg(&start,100);
        insbeg(&start,200);
        insbeg(&start,300);
        insbeg(&start,200);
        insbeg(&start,200);
        insbeg(&start,600);
        traverse();
        printf("\n");
        delocc(&start,200);
        traverse();
        printf("\n");
    }
