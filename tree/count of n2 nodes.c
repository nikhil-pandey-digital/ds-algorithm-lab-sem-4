#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node  *left;
    struct node *right;
};
struct node *getnode(char x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
int countnode(struct node *T)
{
    if(T==NULL)
    {
        return 0;
    }
    else
    {
        if(T->left!=NULL&&T->right!=NULL)
            return 1+countnode(T->left)+countnode(T->right);
        else
        {
            if(T->left!=NULL&&T->right==NULL)
                return countnode(T->left);
            else
            {
                if(T->left==NULL&&T->right!=NULL)
                return countnode(T->right);
            }
        }
    }
    return 0;
}
void main()
{
    struct node *root;
    root=NULL;
    int x;
    root=getnode('A');
    root->left=getnode('B');
    root->right=getnode('E');
     root->left->left=getnode('C');
     root->left->right=getnode('D');
      root->right->right=getnode('F');
      printf("NUMBER OF N2 NODES:=>");
      x=countnode(root);
      printf("%d",x);
      printf("\n");


}





