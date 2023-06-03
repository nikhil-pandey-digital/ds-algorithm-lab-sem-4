#include<stdio.h>
 #include<stdlib.h>
 #include<limits.h>

 struct node
 {
 int info;
 struct node *next;
 };
 int W[20][20];
 struct node *Adj[20];
 /***************************/
 int Queue[20];
 int Rear,Front;
 /***************************/
 /***************************/
 struct node *GetNode(int x)
 {
 struct node*p;
 p=(struct node *)malloc(sizeof(struct node));
 p->info=x;
 p->next=NULL;
 return p;
 }
 /***************************/
void InsBeg(struct node **PQ,int x)
 {
 struct node *p;
 p=GetNode(x);
 p->next=*PQ;
 *PQ=p;
 }
 /***************************/
 struct node *DeQueue(struct node **PQ)
 {
 struct node *x;
 x->info=(*PQ)->info;
 (*PQ)=(*PQ)->next;
 return x;
 }
 /***************************/
 int UpdateKey(struct node **PQ,int v, int key[])
 {
 struct node *p=(*PQ),*q=NULL,*r;
 while(p->info!=v)
 {
 q=p;
 p=p->next;
 }
 if(q!=NULL)
 q->next=p->next;
 else
 (*PQ)=(*PQ)->next;
r=p;
 p=(*PQ);
 q=NULL;

 while(p!=NULL&&key[v]>=key[p->info])
 {
 q=p;
 p=p->next;
 }
 if(q==NULL)
 r->next=*PQ;
 else
 {
 r->next=q->next;
 q->next=r;
 }
 }
 /***************************/
 void MSTPrim(int N)
 {
 int u,v,i;
 struct node *p,*x;
 struct node *PQ=NULL;
 int Pi[20], key[20];

 for(int i=1;i<=N-1;i++)
 {
 Pi[i]=-1;
 key[i]=10000;
InsBeg(&PQ,i);
}
key[0]=0;
 InsBeg(&PQ,0);
 Pi[0]=-1;
 p=PQ;
 while(p!=NULL)
 {
 printf("\n%d %d %d",p->info,key[p->info],Pi[p->info]);
 p=p->next;
 }
 while(PQ!=NULL)
 {
 x=DeQueue(&PQ);
 u=x->info;
 p=Adj[u];
 while(p!=NULL)
 {
 v=p->info;
 if(W[u][v]<key[v])
 {
 key[v] = W[u][v];
 UpdateKey(&PQ,v,key);
 Pi[v]=u;
 }
 p=p->next;
 }
 printf("\nVertex\tkey\tPredecessor");
 for(i=0;i<=N-1;i++)
 printf("\n%d\t%d\t%d",i,key[i],Pi[i]);
 }
 }
 /***************************/
void ReadGraph(int n)
{
    struct node *p,*last;
    int i,j,choice,x;
    for(i=0;i<=n-1;i++)
    {
        last=NULL;
      for(j=0;j<=n-1;j++)
      {
          if(W[i][j]!=0)
          {
              p=GetNode(j);
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
      }
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
    int N,i,j;
 printf("Input the no of nodes in the Graph");
 scanf("%d",&N);
 for(i=0;i<=N-1;i++)
 {
 for(j=0;j<=N-1;j++)
 scanf("%d",&W[i][j]);
 }
 for(i=0;i<=N-1;i++)
 Adj[i]=NULL;
 ReadGraph(N);
 printf("\n\n");
 PrintGraph(N);
 MSTPrim(N);
 return 0;
 }
 /***********************/

