#include<stdio.h>
#include<mylinkedlist.h>
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
        struct node *start=NULL,*p;
        ordered_insertion(&start,100);
         ordered_insertion(&start,200);
         ordered_insertion(&start,300);
          ordered_insertion(&start,600);
          ordered_insertion(&start,400);
          ordered_insertion(&start,500);
         Traverse(start);
    }
