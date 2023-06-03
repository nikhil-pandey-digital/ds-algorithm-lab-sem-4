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
void InsBeg(struct node **cdstart,int x)
{
    struct node *p,*q;
    p=GetNode();
    p->info=x;
    if(*cdstart!=NULL)
    {
        q=(*cdstart)->prev;
        p->next=*cdstart;
        (*cdstart)->prev=p;
        p->prev=q;
        q->next=p;
    }
    else
    {
        p->next=p;
        p->prev=p;
    }
   *cdstart=p;
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
    r=(*q)->prev;
    p->next=*q;
    p->prev=r;
    if(r!=NULL)
        r->next=p;
    else
        *dstart=p;
}
void InsEnd(struct node **cdstart,int x)
{
    struct node *q,*p;
      p=GetNode();
    p->info=x;
    if(*cdstart!=NULL)
    {
        q=(*cdstart)->prev;
        q->next=p;
        p->prev=q;
        p->next=*cdstart;
        (*cdstart)->prev=p;
    }
    else
    {
        p->next=p;
        p->prev=p;
        *cdstart=p;
    }
}

int DelBeg(struct node **cdstart)
{
    int x;
    struct node *p,*q;
    if(*cdstart==NULL)
    {
        printf("linked list underflows");
        exit(1);
    }
    else{
  p=*cdstart;
  if((*cdstart)->next!=*cdstart)
  {
      q=(*cdstart)->prev;
      *cdstart=p->next;
      (*cdstart)->prev=q;
      q->next=*cdstart;
  }
  else
  {
      *cdstart=NULL;
  }}
  x=p->info;
  free(p);
  return x;
}
int  DelAft(struct node **q)
{
    struct node *p,*r;
    int x;
     if(*q==NULL&&(*q)->next==NULL)
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
int DelEnd(struct node **CDS)
{
    struct node *p,*q;
    int x;
    if(*CDS==NULL)
    {
        printf("linked list underflows");
        exit(1);
    }
    else
    { p=(*CDS)->prev;
        if((*CDS)->next!=*CDS)
        {
           q=p->prev;
           q->next=*CDS;
           (*CDS)->prev=q;
        }
        else
        {
            *CDS=NULL;
        }
}
 x=p->info;
        free(p);
        return x;
        }
int DelBefore(struct node **DS,struct node **q)
{
    struct node *p,*r;
    int x;
    if(*q!=NULL&&(*q)->prev==NULL)
    {
        printf("linked list underflows");
        exit(1);
    }
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
}
void Traverse(struct node *CDS)
{
    struct node *q;
    q=CDS;
    while(q!=CDS->prev)
    {
        printf("%d ",q->info);
        q=q->next;
    }
    printf("%d ",q->info);
}
struct node * Search(struct node *DS,int x)
{
    struct node *t;
    t=DS;
    while(t->info!=x)
        t=t->next;
    return t;
}


