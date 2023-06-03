
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coef;
    int exp;
    struct node *next;
};
struct node  *GetNode(void)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
void InsBeg(struct node **S,int x,int y)
{
    struct node *p;
    p=GetNode();
    p->coef=x;
    p->exp=y;
    p->next=*S;
    *S=p;
}

void Traverse(struct node *S)
{
    struct node *q;
    q=S;
    while(q!=NULL)
    {
        printf(" %d,%d ",q->coef,q->exp);
        q=q->next;
    }
}
 void Reverse(struct node **start)
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

void polynomialmult(struct node **poly1,struct node **poly2)
{
    struct node *poly3=NULL,*p,*q;
    p=*poly1;
    q=*poly2;
    while(p!=NULL)
    {q=*poly2;
        while(q!=NULL)
        {
           InsBeg(&poly3,p->coef*q->coef,p->exp+q->exp);
           q=q->next;
        }
           p=p->next;
    }
  Reverse(&poly3);
  printf("\n");
 Traverse(poly3);
   printf("\n");

}
int main()
{
    struct node *start1,*start2,*start3;
start1=NULL;
start3=NULL;
start2=NULL;
    InsBeg(&start1,7,0);
      InsBeg(&start1,6,2);
        InsBeg(&start1,5,3);
          InsBeg(&start1,6,4);
            InsBeg(&start1,3,5);
              InsBeg(&start1,2,6);
              Traverse(start1);
              printf("\n");
              InsBeg(&start2,7,1);
               InsBeg(&start2,6,3);
                InsBeg(&start2,5,4);
                 InsBeg(&start2,6,5);
                  InsBeg(&start2,3,6);
                   InsBeg(&start2,2,7);
                   Traverse(start2);
                   printf("\n");
                   polynomialmult(&start1,&start2);


}

