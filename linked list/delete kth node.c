#include<stdio.h>
#include<mylinkedlist.h>
int count_node(struct node *start)
{struct node *q;
    q=start;
    int c=0;
    while(q!=NULL)
    {
        c++;
        q=q->next;
    }
    return c;
}
void knode(struct node **start,int k)
{ struct node *t,*r;
    int i=1,c;


    t=*start;
    r=*start;
      c=count_node(t);
      if(k>c)
    printf("INVALID INPUT");
    else{
    while(i<=k&&r!=NULL)
    {

        r=r->next;
        i++;
    }

    while(r!=NULL)
          {
              t=t->next;
              r=r->next;
          }

           if(t==*start)
                DelBeg(start);
              else
              {
                DelAft(start);
              }
              Traverse(*start);
              }
              }
int main()
{
    struct node *start1;
    int k;
start1=NULL;
    InsBeg(&start1,100);
      InsBeg(&start1,200);
        InsBeg(&start1,300);
          InsBeg(&start1,400);
            InsBeg(&start1,500);
              InsBeg(&start1,600);
               printf("enter the position of node which you want to delete from the linked list");
    scanf("%d",&k);
              Traverse(start1);
printf("\nTHE %dTH NODE FROM LAST:->",k);
               knode(&start1,k);
}
