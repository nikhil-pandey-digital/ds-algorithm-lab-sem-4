#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start;

int getnode(void)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(int x)
{
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=start;
    start=p;
}
void traverse()
    {
        struct node *q;
        q=start;
        while(q!=NULL)
        {
            printf("%d ",q->info);
            q=q->next;
        }
    }
    void reverse()
    { struct node *p,*c,*n;
        p=NULL;
        c=start;
        n=start->next;
        while(n!=NULL)
        {
            c->next=p;
            p=c;
            c=n;
            n=n->next;
        }
        c->next=p;
      start=c;
    }
    void main()
    {
        start=NULL;
        insbeg(100);
        insbeg(200);
        insbeg(300);
        insbeg(400);
        insbeg(500);
        insbeg(600);
        printf("Before reverse:->");
        traverse();
        printf("\n");
        printf("Before reverse:->");
        reverse();
         traverse();
        printf("\n");
    }
