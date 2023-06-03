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
void unionLL(struct node **START1,struct node **START2)
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
            if(p->info>q->info)
            {
              InsBeg(&START3,q->info);
              q=q->next;
            }
            else
            {
                InsBeg(&START3,p->info);
                p=p->next;
                q=q->next;
            }
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
    printf("UNION OF TWO LINKED LIST:->");
    Traverse(START3);
    printf("\n");
}
void main()
{
    struct node *START1=NULL,*START2=NULL;
    InsBeg(&START1,25);
    InsBeg(&START1,20);
    InsBeg(&START1,10);
    InsBeg(&START1,2);
    InsBeg(&START2,50);
    InsBeg(&START2,30);
    InsBeg(&START2,20);
    InsBeg(&START2,7);
    InsBeg(&START2,5);
    unionLL(&START1,&START2);


}
