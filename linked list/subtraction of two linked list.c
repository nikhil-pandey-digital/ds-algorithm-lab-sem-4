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
void subtraction(struct node **start,struct node **start1)
{struct node *r,*p,*q;
    r=NULL;
    p=*start;
    q=*start1;
    int carry,total,sub;
 Reverse(&p);
  Reverse(&q);
  while((p)!=NULL && (q)!=NULL)
  {
      total=(p)->info-(q)->info+carry;
      if(total<0)
      {
          carry=-1;
      sub=total+10;
      }
      else{
        carry=0;
      sub=total;
      }
      InsBeg(&r,sub);
      (p)=(p)->next;
      (q)=(q)->next;
  }
  while((p)!=NULL)
  {
      total=(p)->info+carry;

      carry=0;
      InsBeg(&r,total);
      (p)=(p)->next;
  }
  while((q)!=NULL)
  {
      total=(q)->info+carry;
      carry=0;
      InsBeg(&r,total);
       (q)=(q)->next;
  }

    printf("\nRESULT OF THE SUBTRACTION OF FIRST AND SECOND NUMBER:->");
Traverse(r);
}
void main()
{
     struct node *START1=NULL,*START2=NULL;
    InsBeg(&START1,5);
    InsBeg(&START1,2);
    InsBeg(&START1,1);



    InsBeg(&START2,5);
    InsBeg(&START2,8);
    printf("\nFIRST NUMBER:->");
    Traverse(START1);
    printf("\n");
    printf("\nSECOND NUMBER:->");
     Traverse(START2);
     printf("\n");
     subtraction(&START1,&START2);
     printf("\n");
}
