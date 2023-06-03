#include<stdio.h>
#include<mylinkedlist.h>
 void split(struct node **start)
{struct node *t,*r,*start2;
    t=*start;
    r=(*start)->next;
    while(r!=NULL && r->next!=NULL)
    {
        t=t->next;
        r=r->next;
              r=r->next;
    }
    start2=t->next;
    t->next=NULL;
printf("\n");
   printf("\nAFTER SPLITTING:->\n");
   printf("FIRST PART:->");
     Traverse(*start);
    printf("\n");
    printf("SECOND PART:->");
    Traverse(start2);
     printf("\n");
}
void main()
{
     struct node *START,*t,*START2;
     START=NULL;
     START2=NULL;
    InsBeg(&START,100);
    InsBeg(&START,200);
    InsBeg(&START,300);
    InsBeg(&START,400);
    InsBeg(&START,500);
    InsBeg(&START,600);
    printf("BEFORE SPLITING:\n");
    Traverse(START);

    split(&START);




}
