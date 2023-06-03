
#include<stdio.h>
struct node
{
    int info;
    struct node *next;
};
int GetNode(void)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
void InsBeg(struct node **S,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->next=*S;
    *S=p;
}
void InsAfter(struct node **q,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->next=(*q)->next;
    (*q)->next=p;
}
void InsEnd(struct node **S,int x)
{
    struct node *q,*p;
    q=*S;
    if(*S==NULL)
        InsBeg(&(*S),x);
    else
    {
    while(q->next!=NULL)
    {
        q=q->next;
    }
    p=GetNode();
    p->info=x;
    p->next=NULL;
    q->next=p;
    }
}
int DelBeg(struct node **S)
{
    int x;
    struct node *p;
    p=*S;
    x=p->info;
    (*S)=(*S)->next;
    free(p);
    return x;
}
int  DelAft(struct node **q)
{
    struct node *p,*r;
    int x;
    p=(*q)->next;
    r=p->next;
    (*q)->next=r;
    x=p->info;
    free(p);
    return x;
}
int DelEnd(struct node **S)
{
    struct node *p,*q;
    int x;
    p=*S;
    q=NULL;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;

    }
    q->next=NULL;
    x=p->info;
    free(p);
    return x;
}
void Traverse(struct node *S)
{
    struct node *q;
    q=S;
    while(q!=NULL)
    {
        printf("%d ",q->info);
        q=q->next;
    }
}
int Search(struct node *S,int x)
{
    struct node *t;
    t=S;
    while(t->info!=x)
        t=t->next;
    return t;
}
