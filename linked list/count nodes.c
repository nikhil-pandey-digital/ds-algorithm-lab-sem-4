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
int count_node()
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
void main()
{int c;
     start=NULL;
        insbeg(1);
        insbeg(2);
        insbeg(3);
        insbeg(4);
        insbeg(5);
        insbeg(6);
        traverse();
        printf("\n");
        c=count_node();
        printf("COUNT=%d ",c);


}

