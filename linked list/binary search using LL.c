#include<stdio.h>
#include<mylinkedlist.h>
    struct node *middle_element(struct node **start)
    {  struct node *t,*r;
        t=*start;
        r=(*start)->next;
        while(r!=NULL && r->next!=NULL)
        {
            t=t->next;
            r=r->next;
            r=r->next;
        }
        return t;
    }
    void binary_search(struct node **start,int x)
    { struct node *m;
        while((*start)!=NULL&&(*start)->next!=NULL)
        {
            m=middle_element(&(*start));
            if(x==m->info)
            {
               printf("ELEMENT %d FOUND AT ADDRESS=%d\n",m->info,m);
               exit(1);
               }
            else
            {
                if(x>m->info)
                    (*start)=m->next;
                else
                    m->next=NULL;
            }
        }
        printf("invalid");
    }
    void main()
    {int n,b;
    struct node *start;
        start=NULL;
        InsBeg(&start,600);
        InsBeg(&start,500);
        InsBeg(&start,400);
        InsBeg(&start,300);
        InsBeg(&start,200);
        InsBeg(&start,100);
Traverse(start);
        printf("enter the element which you want to search in LL");
        scanf("%d",&n);
        printf("\n");
        binary_search(&start,n);
        printf("\n");


    }

