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
    int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
    int height(struct node *T)
{
    if(T==NULL)
        return 0;
    else
    {
        if(T->left==NULL&&T->right==NULL)
            return 0;
        else
            return 1+max(height(T->left),height(T->right));
    }
}
    /*********************************/
    int diameter(struct node *T)
    {
        int h1=-1,h2=-1;
        if(T!=NULL)
           {
               if(T->left!=NULL)
                h1=height(T->left);
                if(T->right!=NULL)
                    h2=height(T->right);
                return h1+h2+2;
           }
           else
            return 0;
    }
void main()
{int x,d;
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


      d=diameter(root);
      printf("DIAMETER OF THE TREE=%d",d);

}





