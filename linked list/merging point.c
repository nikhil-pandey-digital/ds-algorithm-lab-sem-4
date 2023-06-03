#include<stdio.h>
#include<mylinkedlist.h>
int CountNode(struct node **p)
{
    struct node *q;
    int c;
    q=*p;
    c=0;
    while(q!=NULL)
    {
        c++;
        q=q->next;
    }
    return c;
}

void MergingPoint(struct node **p,struct node **q)
{
    int i=0;
    int c1,c2;
    c1=CountNode(p);
    c2=CountNode(q);
    if(c1>c2)
    {
        while(i!=c1-c2)
        {
           *p=(*p)->next;
            i++;
        }
    }
    else
    {
        while(i!=c2-c1)
        {
            (*q)=(*q)->next;
            i++;
        }
    }
    while(*p!=*q)
    {
        *p=(*p)->next;
        *q=(*q)->next;
    }
    printf("Merging point=%d",(*p)->info);
}
void main()
{
    struct node *p=NULL,*q=NULL,*r,*s;
    InsBeg(&p,9);
    InsBeg(&p,8);
    InsBeg(&p,7);
    InsBeg(&p,6);
    InsBeg(&p,5);
    InsBeg(&p,4);
    InsBeg(&p,3);
    InsBeg(&p,2);
    InsBeg(&p,1);
    InsBeg(&q,6);
    InsBeg(&q,5);
    r=Search(p,7);
    s=Search(q,6);
    s->next=r;
    MergingPoint(&p,&q);
}
