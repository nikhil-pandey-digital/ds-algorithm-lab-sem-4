#include<stdio.h>
#include<mylinkedlist.h>
void Reverse(struct node **START)
{
    struct node *p,*c,*n;
    p=NULL;
    c=*START;
    n=(*START)->next;
    while(n!=NULL)
    {
        c->next=p;
        p=c;
        c=n;
        n=n->next;
            }
    c->next=p;
    *START=c;
}
void addition(struct node **p,struct node **q)
{struct node *r;
    r=NULL;
    int carry=0,total,sum;
 Reverse(p);
  Reverse(q);
  while((*p)!=NULL && (*q)!=NULL)
  {
      total=(*p)->info+(*q)->info+carry;
      sum=total%10000;
      carry=total/10000;
      InsBeg(&r,sum);
      (*p)=(*p)->next;
      (*q)=(*q)->next;
  }
  while((*p)!=NULL)
  {
      total=(*p)->info+carry;
      sum=total%10000;
      carry=total/10000;
      InsBeg(&r,sum);
      (*p)=(*p)->next;
  }
  while((*q)!=NULL)
  {
      total=(*q)->info+carry;
      sum=total%10000;
      carry=total/10000;
      InsBeg(&r,sum);
       (*q)=(*q)->next;
  }
  if(carry!=0)
    InsBeg(&r,carry);

    printf("\nFIRST AND SECOND NUMBER:->");
Traverse(r);
}
void main()
{
     struct node *START1=NULL,*START2=NULL;

    InsBeg(&START1,3456);
    InsBeg(&START1,8912);
    InsBeg(&START1,4567);
    InsBeg(&START1,9123);
    InsBeg(&START1,5678);
    InsBeg(&START1,1234);


    InsBeg(&START2,6842);
    InsBeg(&START2,1376);
    InsBeg(&START2,4823);
    InsBeg(&START2,7569);
    InsBeg(&START2,1);

    printf("\nFIRST NUMBER:->");
    Traverse(START1);
    printf("\n");
    printf("\nSECOND NUMBER:->");
     Traverse(START2);
     printf("\n");
     addition(&START1,&START2);
     printf("\n");
}

