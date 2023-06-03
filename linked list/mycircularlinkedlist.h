#include<stdio.h>
struct node
{
    int info;
    struct node *next;
};
/********************************/
struct node *GetNode(void)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
/********************************/
void InsBeg(struct node **CS,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    if(*CS!=NULL)
    {
    p->next=(*CS)->next;
    (*CS)->next=p;
    }
    else
    {
        p->next=p;
        *CS=p;
    }
}
/********************************/
void InsAfter(struct node **q,int x)

{ struct node *p;
if(q!=NULL)
{
    p=GetNode();
    p->info=x;
    p->next=(*q)->next;
    (*q)->next=p;
}
else
{
    printf("void insertion");
    exit(1);
}
}
/********************************/
void InsEnd(struct node **CS,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    if(*CS!=NULL)
    {
    p->next=(*CS)->next;
    (*CS)->next=p;
    *CS=p;
    }
    else
    {
        p->next=p;
        *CS=p;
    }
}
/********************************/
int DelBeg(struct node **CS)
{int x;
struct node *p;
    if(*CS==NULL)
    {
        printf("void deletion");
        exit(1);
    }
    else
        {
            p=(*CS)->next;
    if((*CS)->next!=*CS)
        (*CS)->next=p->next;
    else
        *CS=NULL;
    x=p->info;
    free(p);
    return x;
    }
}
/********************************/
int  DelAft(struct node **CS,struct node **p)
{
    struct node *r,*q;
    int x;
    if(p==NULL&&*CS==NULL)
    {
        printf("void deletion");
        exit(1);
    }
    else
    {
        q=(*p)->next;
        r=q->next;
        if((*p)->next!=*p)
        {
            if((*p)->next!=*CS)
            (*p)->next=r;
        else
        {
            *CS=*p;
            (*p)->next=r;
        }
        }
        else
            *p=NULL;
    }
        x=(q)->info;
        free(q);
        return x;
}
/********************************/
int DelEnd(struct node **CS)
{
    struct node *p,*q;
    int x;
    p=(*CS)->next;
    while(p->next!=*CS)
        p=p->next;
    q=*CS;
    p->next=(*CS)->next;
    if((*CS)->next!=(*CS))
        *CS=p;
    else
        *CS=NULL;
    x=q->info;
    free(q);
    return x;
}
/********************************/
void Traverse(struct node *CS)
{
    struct node *p;
   p=CS->next;
    while(p!=CS)
    {
        printf("%d ",p->info);
        p=p->next;
    }
printf("%d ",p->info);
}
/********************************/
struct node *Search(struct node *CS,int x)
{
    struct node *t;
    t=CS;
    while(t->info!=x)
        t=t->next;
    return t;
}
/********************************/


