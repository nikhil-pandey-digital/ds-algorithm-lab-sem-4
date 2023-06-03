#include<stdio.h>
#include<mylinkedlist.h>
void sorting(struct node **start)
{
    struct node *p,*q;
    int temp;
    p=*start;
    while(p->next!=NULL)
    {
        q=p->next;
        while(q!=NULL)
        {
            if(p->info>q->info)
            {
                 temp=p->info;
                p->info=q->info;
                q->info=temp;
            }
            q=q->next;
        }
        p=p->next;
    }
}
 void main()
    {struct node *start;
        start=NULL;
        InsBeg(&start,100);
        InsBeg(&start,500);
         InsBeg(&start,400);
          InsBeg(&start,800);
           InsBeg(&start,150);
           printf("BEFORE SORTING:->");
        Traverse(start);
        printf("\n\n");
        sorting(&start);
        printf("AFTER SORTING:->");
        Traverse(start);
        printf("\n\n");
    }

