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

struct node *INSBST(struct node *T,int x)
{
    if(T==NULL)
        T=getnode(x);
    else
    {
        if(x<(T)->data)
            (T)->left=INSBST((T)->left,x);
        else
            (T)->right=INSBST((T)->right,x);
    }
    return T;
    }
void main()
{int x;
    struct node *root=NULL,*y;
    root=getnode(8);
root->data=8;

        root=INSBST(root,10);
        root=INSBST(root,20);
        root=INSBST(root,40);
        root=INSBST(root,30);
        root=INSBST(root,50);

       printf("INORDER TRAVERSAL:=>");
      InOrderTraversal(root);
      printf("\n");
      printf("enter the element you want to add in the tree");
      scanf("%d",&x);
      root=INSBST(root,x);
      printf("INORDER TRAVERSAL:=>");
      InOrderTraversal(root);
      printf("\n");

}




