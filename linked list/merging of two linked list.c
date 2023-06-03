#include<stdio.h>
#include<mylinkedlist.h>
void Reverse(struct node **START)
{
    struct node *p,*c,*n;
    p=NULL;
    c=*START;
    n=(*START)->next;
    while(n!=NULL)
    {
        c->next=p;
        p=c;
        c=n;
        n=n->next;
    }
    c->next=p;
    *START=c;
}
void MergeLL(struct node **START1,struct node **START2)
{
    struct node *p,*q,*START3;
    p=*START1;
    q=*START2;
    START3=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
            InsBeg(&START3,p->info);
            p=p->next;
        }
        else
        {
            InsBeg(&START3,q->info);
            q=q->next;
        }
    }
    while(p!=NULL)
    {
        InsBeg(&START3,p->info);
        p=p->next;
    }
    while(q!=NULL)
    {
        InsBeg(&START3,q->info);
        q=q->next;
    }
    Reverse(&START3);
    Traverse(START3);
}
 void ordered_insertion(struct node **start,int x)
    {struct node *p,*q;
        p=*start;
        q=NULL;
        while(p!=NULL && x>=p->info)
        {
            q=p;
            p=p->next;
        }
            if(q==NULL)
                InsBeg(start,x);
            else
                InsAfter(&q,x);
    }
void main()
{
    struct node *START1=NULL,*START2=NULL;
    ordered_insertion(&START1,25);
    ordered_insertion(&START1,20);
    ordered_insertion(&START1,10);
    ordered_insertion(&START1,2);
    ordered_insertion(&START2,50);
    ordered_insertion(&START2,30);
    ordered_insertion(&START2,22);
    ordered_insertion(&START2,7);
    ordered_insertion(&START2,5);
    MergeLL(&START1,&START2);


}
