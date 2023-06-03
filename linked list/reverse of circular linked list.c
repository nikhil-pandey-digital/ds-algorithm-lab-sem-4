#include<stdio.h>
#include<mycircularlinkedlist.h>
void Reverse(struct node **CSTART)
{
    struct node *p,*c,*n;
    c=(*CSTART)->next;
    n=c->next;
    if(*CSTART==NULL)
        printf("Reverse not Possible!\n");
    if((*CSTART)->next==*CSTART)
        printf("Single Digit is Reverse of itself!\n");
    else
    {
        while(c!=*CSTART)
        {
            p=c;
            c=n;
            n=c->next;
            c->next=p;
        }
        n->next=*CSTART;
        *CSTART=n;
    }

}


void main()
{
    struct node *CSTART=NULL;
    InsBeg(&CSTART,1);
    InsBeg(&CSTART,2);
    InsBeg(&CSTART,3);
    InsBeg(&CSTART,4);
    InsBeg(&CSTART,5);
    InsBeg(&CSTART,6);
     printf("Before reversing:");
    Traverse(CSTART);
    printf("\n\n");
    Reverse(&CSTART);
    printf("After reversing:");
    Traverse(CSTART);
     printf("\n\n");
}
