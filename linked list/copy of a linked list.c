#include<stdio.h>
#include<mylinkedlist.h>
void reverse(struct node **start)
    { struct node *p,*c,*n;
        p=NULL;
        c=*start;
        n=(*start)->next;
        while(n!=NULL)
        {
            c->next=p;
            p=c;
            c=n;
            n=n->next;
        }
        c->next=p;
      *start=c;
    }
int createcopy(struct node **start)
{struct node *p,*start1;
    start1=NULL;
    p=(*start);
    while(p!=NULL)
    {
        InsEnd(&start1,p->info);
        p=p->next;
    }
    printf("COPIED LINKED LIST:->");
     Traverse(start1);
     printf("\n");
       reverse(&start1);
       printf("\nREVERSED LINKED LIST:->");
        Traverse(start1);
     printf("\n");
}

void main()
{
struct node *START=NULL,*c,*t;
    InsBeg(&START,100);
    InsBeg(&START,200);
    InsBeg(&START,300);
    InsBeg(&START,400);
    InsBeg(&START,500);
    InsBeg(&START,600);
    printf("ORIGINAL LINKED LIST:->");
    Traverse(START);
    printf("\n");
    printf("\n");
    createcopy(&START);
       printf("\n");


}
