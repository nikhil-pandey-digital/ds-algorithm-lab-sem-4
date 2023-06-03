#include<stdio.h>
#include<mylinkedlist.h>

int Reverse(struct node **START)
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
void Palindrome(struct node **START)
{
    struct node *T,*R,*t,*s;
    T=*START;
    R=(*START)->next;
    while(R!=NULL && R->next!=NULL)
    {
        T=T->next;
        R=R->next;
        R=R->next;
    }
    s=T->next;
    Reverse(&s);
    T->next=s;
    t=*START;
    while(s!=NULL)
    {
        if(t->info!=s->info)
        {
            printf("Not Palindrome!\n");
            break;
        }
            t=t->next;
            s=s->next;
    }
    printf("Palindrome!\n");

}
void main()
{
    struct node *START=NULL;
    InsBeg(&START,2);
    InsBeg(&START,6);
    InsBeg(&START,8);
    InsBeg(&START,8);
    InsBeg(&START,6);
    InsBeg(&START,2);
    Traverse(START);
    printf("\n");
    Palindrome(&START);
}
