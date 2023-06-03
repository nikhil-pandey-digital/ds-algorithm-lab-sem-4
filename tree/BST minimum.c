#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node  *left;
    struct node *right;
};
struct node *getnode(int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

void InOrderTraversal(struct node *T)
{
    if(T!=NULL)
    {
    InOrderTraversal(T->left);
      printf("%d ",T->data);
    InOrderTraversal(T->right);
}}
void INSBST(struct node **T,int x)
{
    struct node *p,*r,*q;
    p=*T;
    q=NULL;
    r=getnode(x);
    r->data=x;

    while(p!=NULL)
    {
        q=p;
            if(x<p->data)
                p=p->left;
            else
                p=p->right;
    }
    if(x<q->data)
        q->left=r;
    else
        q->right=r;
    }
struct node *BSTMIN(struct node **T)
{
    struct node *p,*q;
    p=*T;
   q=NULL;
    while(p!=NULL)
    {
         q=p;
                p=p->left;
    }
   return q;
    }
void main()
{
   struct node *root=NULL,*M;
root=getnode(8);
root->data=8;

        INSBST(&root,10);
        INSBST(&root,20);
        INSBST(&root,40);
        INSBST(&root,30);
        INSBST(&root,50);

       printf("INORDER TRAVERSAL:=>");
      InOrderTraversal(root);
      printf("\n");
      M=BSTMIN(&root);
      printf("MINIMUM VALUE OF TREE=>%d",M->data);


}




