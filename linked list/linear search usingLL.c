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
    int middle_element()
    {  struct node *t,*r;
        t=start;
        r=start->next;
        while(r!=NULL && r->next!=NULL)
        {
            t=t->next;
            r=r->next;
            r=r->next;
        }
        return t->info;
    }
    int linear_search(int x)
    { struct node *p;
    p=start;
    while(p!=NULL)
    {
        if(x==p->info)
        {
            printf("%d ",p->info);
            return p;
        }
            else
            p=p->next;
    }
    return NULL;
    }
    void main()
    {int n,b;
        start=NULL;
        insbeg(100);
        insbeg(200);
        insbeg(300);
        insbeg(400);
        insbeg(500);
        insbeg(600);
        printf("enter the element which you want to search in LL");
        scanf("%d",&n);
        b=linear_search(n);
        printf("%d ",b);

    }


