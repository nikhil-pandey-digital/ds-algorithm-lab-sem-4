#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *Adj[20];
/*******************************************/
int Queue[20];
int rear,front;
/******************************************/
void initialize()
{
    rear=-1;
    front=0;
}
/***********************************/
void Enqueue(int x)
{
    rear++;
    Queue[rear]=x;
}
/************************************/
int Dequeue()
{
    int x;
    x=Queue[front];
    front++;
    return x;
}
/**********************************/
int isempty()
{
    if(rear-front+1==0)
        return 1;
    else
        return 0;
}
/***********************************/
struct node *Getnode(int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=x;
    p->next=NULL;
    return p;
}
/**************************************/
void BFS(int s,int n)
{
    struct node *p;
    int color[10]={0};
    int white=0,grey=1,black=2;
    int u,v;
    initialize();
    Enqueue(s);
    color[s]=grey;
    while(!isempty())
    {
        u=Dequeue();
        p=Adj[u];
        while(p!=NULL)
        {
            v=p->info;
            if(color[v]==white)
            {
                color[v]=grey;
                Enqueue(v);
            }
            p=p->next;
        }
        color[u]=black;
        printf("%d ",u);
    }
}
void DFS_VISIT(int u,int color[])
{
    struct node *p;
    int white=0,grey=1,black=2;
    int v;
    printf("%d ",u);
    color[u]=grey;
    p=Adj[u];

        while(p!=NULL)
        {
            v=p->info;
            if(color[v]==white)
            {
                DFS_VISIT(v,color);
            }
            p=p->next;
               }
        color[u]=black;
}
/**************************/
void DFS(int N)
{
    int color[10]={0};
    int white=0,grey=1,black=2;
    int u,v;
    int i;
    for(i=0;i<=N-1;i++)
        if(color[i]==white)
            DFS_VISIT(i,color);
}
/*********/
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
    BFS(0,n);
    printf("\n");
    DFS(n);
    return 0;
}

