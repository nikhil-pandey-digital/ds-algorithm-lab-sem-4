#include<stdio.h>
#include<mylinkedlist.h>
void concatinate(struct node **start1,struct node **start2)
{
    struct node *p,*q;
    p=*start1;
    q=*start2;
    while(p->next!=NULL)
        p=p->next;
    p->next=*start2;
}

void main()
{
     struct node *START,*t,*START2;
     START=NULL;
     START2=NULL;
    InsBeg(&START,300);
    InsBeg(&START,200);
    InsBeg(&START,100);
    printf("FIRST LINKED LIST:->");
    Traverse(START);
printf("\n");
    InsBeg(&START2,600);
    InsBeg(&START2,500);
    InsBeg(&START2,400);
    printf("SECOND LINKED LIST:->");
    Traverse(START2);
printf("\n");
    concatinate(&START,&START2);
    Traverse(START);
printf("\n");

}
