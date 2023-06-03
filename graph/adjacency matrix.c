#include<stdio.h>
#include<stdlib.h>
#define MAXROW 20
#define MAXCOL 20
struct node{
int info;
struct node *next;
};
struct node *ADJ[20];

struct node *getnode(int x){
struct node *p;
p=(struct node *)malloc(sizeof(struct node));
p->info=x;
p->next=NULL;
return p;
}

void GetMatrix(int n){
 int matrix[MAXROW][MAXCOL];
    int i,j;
    struct node *p,*last;
    printf("\nEnter matrix elements :\n");
    for(i=0;i< n;i++)
    {
        for(j=0;j< n;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nMatrix is :\n");
    for(i=0;i< n;i++)
    {
        for(j=0;j< n;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i< n;i++)
    {
        last=NULL;
        for(j=0;j< n;j++)
        {
            if(matrix[i][j]==1){
                p=getnode(j);
                if(last==NULL){
                ADJ[i]=p;
                last=ADJ[i];

            }
            else{
                last->next=p;
                last=p;
            }
            }
        }
    }
}

void PrintGraph(int N)
 {
 int i;
 struct node *p;

 printf("Adjacency list is\n");
 printf("------------------\n");
 for(i=0;i<=N-1;i++)
 {
 printf("%d:-> ",i);
 p=ADJ[i];
 while(p!=NULL)
 {
 printf("%d,",p->info);
 p=p->next;
 }
 printf("\n\n");
 }
 }


 int main(){
 int n,i;
 printf("enter the no.of nodes");
 scanf("%d",&n);
 for(i=0;i<n-1;i++){
    ADJ[i]=NULL;
 }
    GetMatrix(n);
    PrintGraph(n);
 }
