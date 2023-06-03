#include<stdio.h>
#include<mylinkedlist.h>
void traverse(struct node *S)
{
    struct node *q;
    q=S;
    while(q!=NULL)
    {
        printf("%c ",q->info);
        q=q->next;
    }
}
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
void vowels(struct node **START)
{
          struct node *p,*q,*r,*s;
          p=*START;
          q=*START;
          while(p->next!=NULL)
          {
                    p=p->next;
          }
          r=p;
          s=NULL;
          while(q!=r)
          {
                    if(q->info =='a'||q->info=='u'||q->info =='e'||q->info=='i'||q->info =='o')
                    {

                           InsAfter(&p,q->info);
                           p=p->next;
                           if(s==NULL){
                                     q=q->next;
                                     DelBeg(START);
                           }
                           else{
                                     q=q->next;
                                     DelAft(&s);
                           }
                    }
                    else{
                     s=q;
                     q=q->next;
                    }
          }
          if(q->info =='a'||q->info=='u'||q->info =='e'||q->info=='i'||q->info =='o')
          {
                 InsAfter(&p,q->info);
                 DelAft(&s);
          }
          Reverse(START);
          traverse(*START);



}
int main()
{
          struct node *START;
          START=NULL;
         InsBeg(&START,'a');
          InsBeg(&START,'b');
          InsBeg(&START,'c');
          InsBeg(&START,'d');
          InsBeg(&START,'e');
          InsBeg(&START,'i');
          vowels(&START);




}
