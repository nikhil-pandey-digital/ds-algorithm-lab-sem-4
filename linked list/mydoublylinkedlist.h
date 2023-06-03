
#include<stdio.h>
struct node
{
    int info;
    struct node *next,*prev;
};
struct node *GetNode(void)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
void InsBeg(struct node **dstart,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
   p->prev=NULL;
   p->next=*dstart;
   if(*dstart!=NULL)
    (*dstart)->prev=p;
   *dstart=p;
}
void InsAfter(struct node **q,int x)
{
    struct node *p,*r;
    p=GetNode();
    p->info=x;
    r=(*q)->next;
    (*q)->next=p;
    p->prev=*q;
    p->next=r;
   if(r!=NULL)
    r->prev=p;
}
void InsBefore(struct node **dstart,struct node **q,int x)
{struct node *p,*r;
    p=GetNode();
    p->info=x;
    if((*q)!=NULL)
    {
    r=(*q)->prev;
    p->next=*q;
    p->prev=r;
    if(r!=NULL)
        r->next=p;
    else
        *dstart=p;
}}
void InsEnd(struct node **dstart,int x)
{
    struct node *q,*p;
    q=*dstart;
      p=GetNode();
    p->info=x;
    p->next=NULL;
   if(q!=NULL)
   {
       while(q->next!=NULL)
        q=q->next;
       q->next=p;
   }
   else
    *dstart=p;
   p->prev=q;
    }

int DelBeg(struct node **dstart)
{
    int x;
    struct node *p;
    if(*dstart==NULL)
    {
        printf("linked list underflows");
        exit(1);
    }
    else{
  p=*dstart;
  *dstart=p->next;
  if(dstart!=NULL)
    (*dstart)->prev=NULL;
  x=p->info;
  free(p);}
  return x;
}
int  DelAft(struct node **q)
{
    struct node *p,*r;
    int x;
     if(*q==NULL||(*q)->next==NULL)
    {
        printf("linked list underflows");
        exit(1);
    }
    p=(*q)->next;
    r=p->next;
    (*q)->next=r;
    if(r!=NULL)
    r->prev=*q;
    x=p->info;
    free(p);
    return x;
}
int DelEnd(struct node **DS)
{
    struct node *p,*q;
    int x;
    if(*DS==NULL)
    {
        printf("linked list underflows");
        exit(1);
    }
    else{
    p=*DS;
    while(p->next!=NULL)
        p=p->next;
        q=p->prev;
        if(q!=NULL)
    q->next=NULL;
    else
        *DS=NULL;}
    x=p->info;
    free(p);
    return x;
}
int DelBefore(struct node **DS,struct node **q)
{
    struct node *p,*r;
    int x;
    if(*q==NULL||(*q)->prev==NULL)
    {
        printf("linked list underflows");
        exit(1);
    }
    else{
    p=(*q)->prev;
    r=p->prev;
    (*q)->prev=r;
    if(r!=NULL)
    {
        r->next=*q;
    }
    else
    {
        *DS=*q;
    }
    x=p->info;
    free(p);
    return x;
}}
void Traverse(struct node *DS)
{
    struct node *q;
    q=DS;
    while(q!=NULL)
    {
        printf("%d ",q->info);
        q=q->next;
    }
}
struct node * Search(struct node *DS,int x)
{
    struct node *t;
    t=DS;
    while(t->info!=x)
        t=t->next;
    return t;
}

