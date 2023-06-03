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
    void PQinsertion(struct node **PQ,int x)
    {
        ordered_insertion(&(*PQ),x);
    }
    int PQdeletion(struct node**PQ)
    {int x;
        x=DelBeg(&(*PQ));
        return x;
    }
int main()
{
    struct node *PQ;
    int x;
    PQ=NULL;
    PQinsertion(&PQ,100);
    PQinsertion(&PQ,200);
    PQinsertion(&PQ,300);
    PQinsertion(&PQ,400);
    Traverse(PQ);
    printf("\n");
    x=PQdeletion(&PQ);
    Traverse(PQ);
    printf("\n");

}
