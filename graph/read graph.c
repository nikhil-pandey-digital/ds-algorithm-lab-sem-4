#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *Adj[20];

struct node *Getnode(int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=x;
    p->next=NULL;
    return p;
}
void ReadGraph(int n)
{
    struct node *p,*last;
    int i,choice,x;
    for(i=0;i<=n-1;i++)
    {
        last=NULL;
        do
        {
            printf("Does the adjacent of %d exist?(1/0)",i);
            scanf("%d",&choice);
            if(choice==1)
            {
                printf("enter the adjacent element of %d ",i);
                scanf("%d",&x);
                p=Getnode(x);
                if(last==NULL)
                {
                    Adj[i]=p;
                    last=Adj[i];
                }
                else
                {
                    last->next=p;
                    last=p;
                }
            }
        }while(choice==1);
    }
}
void PrintGraph(int n)
{
    int i;
    struct node *p;
    printf("ADJACENT LIST IS\n");
    printf("-------------------\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d:-> ",i);
        p=Adj[i];
        while(p!=NULL)
        {
            printf("%d,",p->info);
            p=p->next;
        }
        printf("\n\n");
    }
}
int main()
{
    int n,i;
    printf("enter the no. of nodes in the graph");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        Adj[i]=NULL;
    }
    ReadGraph(n);
    PrintGraph(n);
    return 0;
}
