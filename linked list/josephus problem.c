#include<stdio.h>
#include<mycircularlinkedlist.h>
int josephus(struct node **cstart,int k)
{
    struct node *p;
    p=(*cstart)->next;
    while(p->next!=p)
       {
           int c=1;
    while(c!=k-1)
    {
        c++;
        p=p->next;
    }
    DelAft(&cstart,&p);
    p=p->next;
       }
    return p->info;
}
/********************************************************/
int main()
{
    struct node *cstart=NULL,*t;
int p;
    InsBeg(&cstart,100);
    InsBeg(&cstart,200);
    InsBeg(&cstart,300);
    InsBeg(&cstart,400);
    InsBeg(&cstart,500);
    InsBeg(&cstart,600);
    printf("After Insertion In Beginning:->");
    Traverse(cstart);
    printf("\n\n");
    InsEnd(&cstart,800);
    InsEnd(&cstart,700);
    printf("After Insertion in End:->");
     Traverse(cstart);
      printf("\n\n");
      t=Search(cstart,600);
      InsAfter(&t,550);
       printf("After Insertion in Between:->");
       Traverse(cstart);
      printf("\n\n");
      DelBeg(&cstart);
      printf("After Deletion In Beginning:->");
        Traverse(cstart);
      printf("\n\n");
       DelEnd(&cstart);
       printf("After Deletion in End:->");
        Traverse(cstart);
      printf("\n\n");
      t=Search(cstart,200);
      DelAft(&cstart,&t);
        printf("After Deletion in Between:->");
        Traverse(cstart);
      printf("\n\n");
      p=josephus(&cstart,13);
      printf("%d",p);
}
