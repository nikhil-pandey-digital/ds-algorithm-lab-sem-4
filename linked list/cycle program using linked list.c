#include<stdio.h>
#include<mylinkedlist.h>

int cycle (struct node **start)
{
    struct node *t,*r;
    t=*start;
    r=*start;
    while(r!=NULL && r->next!=NULL)
    {
        t=t->next;
        r=r->next;
        r=r->next;
        if(t==r)
        {
        printf("CYCLE FOUND\n");
        return 1;
        }
    }
    printf("CYCLE NOT FOUND\n");
return 0;
}
void length(struct node **start)
{int c;
struct node *t,*r;
    t=*start;
    r=(*start)->next;
    while(t!=r)
    {
        t=t->next;
        r=r->next;
        r=r->next;
    }
    c=1;
    t=t->next;
    while(t!=r)
    {
        c++;
        t=t->next;
    }
  printf("LENGTH  OF CYCLE:->%d\n",c);
}
void startingpoint(struct node **start)
{
    struct node *t,*r;
    t=*start;
    r=t->next;
    while(t!=r)
    {
        t=t->next;
        r=r->next;
        r=r->next;
    }
    t=*start;
    r=r->next;
    while(t!=r)
    {
        t=t->next;
        r=r->next;
    }
    printf("STARTING POINT:->%d\n",t->info);
}
int main()
{struct node *start,*p,*q;
start=NULL;
int l;
    InsBeg(&start,6);
      InsBeg(&start,5);
        InsBeg(&start,4);
          InsBeg(&start,3);
            InsBeg(&start,2);
              InsBeg(&start,1);
              p=Search(start,3);
              q=Search(start,6);
              q->next=p;
              cycle(&start);
            length(&start);
              startingpoint(&start);
}

