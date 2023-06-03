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
void even()
{ struct node *q;
    q=start;
    while(q!=NULL)
    {
        if(q->info%2==0)
        {
            q->info=0;

        }
        q=q->next;
    }
}

void main()
{
     start=NULL;
        insbeg(1);
        insbeg(2);
        insbeg(3);
        insbeg(4);
        insbeg(5);
        insbeg(6);
        traverse();
        even();
        printf("\n");
        traverse();

}
