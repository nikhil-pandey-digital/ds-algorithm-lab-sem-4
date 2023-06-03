#include<stdio.h>
#include<mylinkedlist.h>
void duplicate(struct node **start)
{
    struct node *p,*q;
    p=*start;
    q=(*start)->next;
    while(q!=NULL)
    {
        if((p->info^q->info)==0)
        {
            q=q->next;
            DelAft(&p);
        }
        else
        {

            p=p->next;
              q=q->next;
        }
    }
    printf("After Duplicate Deletion:\n");
    Traverse(*start);
}
void main()
{
    struct node *START=NULL,*p,*q;
    InsBeg(&START,6);
    InsBeg(&START,6);
    InsBeg(&START,3);
    InsBeg(&START,3);
    InsBeg(&START,1);
    InsBeg(&START,1);
    printf("Before Duplicate Deletion:\n");
    Traverse(START);
    printf("\n");
    duplicate(&START);
}
