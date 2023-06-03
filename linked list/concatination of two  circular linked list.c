#include<stdio.h>
#include<mycircularlinkedlist.h>
void Concatenate(struct node **CSTART1,struct node **CSTART2)
{
    struct node *p,*q;
    p=(*CSTART1)->next;
    q=(*CSTART2)->next;
    (*CSTART1)->next=q;
    (*CSTART2)->next=p;
    Traverse(*CSTART2);
}
void main()
{
    struct node *CSTART1=NULL,*CSTART2=NULL;
    InsBeg(&CSTART1,13);
    InsBeg(&CSTART1,12);
    InsBeg(&CSTART1,11);
    InsBeg(&CSTART1,10);
    InsBeg(&CSTART1,9);
    InsBeg(&CSTART1,8);
    InsBeg(&CSTART2,7);
    InsBeg(&CSTART2,6);
    InsBeg(&CSTART2,5);
    InsBeg(&CSTART2,4);
    Traverse(CSTART1);
    printf("\n");
    Traverse(CSTART2);
    printf("\n");
    printf("After Concatenation!\n");
    Concatenate(&CSTART1,&CSTART2);
}
