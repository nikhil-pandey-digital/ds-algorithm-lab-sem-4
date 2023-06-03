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
void insbeg(int x)
{
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=start;
    start=p;
}
void insafter(int y,int x)
{
    struct node *p,*t;
    t=start;
    while(t!=NULL)
    {
        if(t->info==y)
        break;
        else
            t=t->next;
    }
    p=getnode();
    p->info=x;
    p->next=t->next;
    t->next=p;
}
void insend(int x)
{
    struct node *p,*q;
    q=start;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;
}
int delbeg()
{
    struct node *p;
    int x;
    p=start;
    x=p->info;
    start=start->next;
    freenode(p);
    return x;
}
int delaft(struct node *q)
{  struct node *p,*r;
int x;
    p=q->next;
    r=p->next;
    q->next=r;
    x=p->next;
    freenode(p);
    return x;
}
int delend()
{ struct node *p,*q;
int x;
p=start;
q=NULL;
while(p->next!=NULL)
{
    q=p;
    p=p->next;

}
q->next=NULL;
x=p->info;
freenode(p);
return x;
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
    void reversetraversal(struct node *s)
    {
        if(s!= NULL)
        {
            reversetraversal(s->next);
            printf("%d ",s->info);
    }}
    void main()
    {
        start=NULL;
        insbeg(100);
        insbeg(200);
        insbeg(300);
        insbeg(400);
        insbeg(500);
        insbeg(600);
        traverse();
        printf("\n");
         reversetraversal(start);
         printf("\n");



    }

