#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
void PreOrderTraversal(struct node *T)
{
    if(T!=NULL)
    {
    printf("%d ",T->data);
    PreOrderTraversal(T->left);
    PreOrderTraversal(T->right);
}}
void InOrderTraversal(struct node *T)
{
    if(T!=NULL)
    {
    InOrderTraversal(T->left);
      printf("%d ",T->data);
    InOrderTraversal(T->right);
}}
void PostOrderTraversal(struct node *T)
{
    if(T!=NULL)
    {
    PostOrderTraversal(T->left);
    PostOrderTraversal(T->right);
     printf("%d ",T->data);
}}
void CreateTree(struct node **T)
{
    int choice,x;
    struct node *p;
    if((*T)==NULL)
    {
      printf("Enter the Data of root node:\n");
      scanf("%d",&x);
      (*T)=getnode(x);
       CreateTree(T);
    }
    else
    {
        printf("Whether the left of %d exists?(1/0)",(*T)->data);
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Input the data of left of %d:=>",(*T)->data);
            scanf("%d",&x);
            p=getnode(x);
            (*T)->left=p;
            CreateTree(&p);
        }
        printf("Whether the right of %d exists?(1/0)",(*T)->data);
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Input the data of right of %d:=>",(*T)->data);
            scanf("%d",&x);
            p=getnode(x);
            (*T)->right=p;
            CreateTree(&p);
        }
    }
}
int countnode(struct node *T)
{
    if(T==NULL)
    {
        return 0;
    }
    else
    {
        if(T->left==NULL&&T->right==NULL)
            return 1;
        else
            return 1+countnode(T->left)+countnode(T->right);
    }
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
void completetree(struct node *T)
{
    int n,h;
    n=countnode(T);
    h=height(T);
    if(n==pow(2,h+1)-1)
        printf("YES IT IS A COMPLETE BINARY TREE");
    else
       printf("NO IT IS NOT A COMPLETE BINARY TREE");
}
void main()
{
    struct node *root=NULL;
    CreateTree(&root);
int h;
      printf("PREORDER TRAVERSAL:=>");
      PreOrderTraversal(root);
      printf("\n");
       printf("INORDER TRAVERSAL:=>");
      InOrderTraversal(root);
      printf("\n");
       printf("POSTORDER TRAVERSAL:=>");
      PostOrderTraversal(root);
      printf("\n");
      h=height(root);
      printf("HEIGHT OF TREE=%d",h);
       printf("\n");
       completetree(root);

}



