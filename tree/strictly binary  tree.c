 #include<stdio.h>
#include<stdlib.h>

struct node
{
    char data;
    struct node *left;
    struct node *right;
};
struct node*GetNode(int x)
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
int CountNodes(struct node *T)
{
    if(T==NULL)
        return 0;
    else
    {
        if(T->left!=NULL && T->right!=NULL)
            return CountNodes(T->left)+CountNodes(T->right);
        else
        {
            if(T->left!=NULL&& T->right==NULL)
                return 1+CountNodes(T->left);
            else
            {
                    if(T->left==NULL&& T->right!=NULL)
                       return 1+CountNodes(T->right);
            }
        }
    }
}
int Height(struct node *T)
{
    if(T==NULL)
        return 0;
    else
    {
      if(T->left==NULL&&T->right==NULL)
      return 0;
    else
        return 1+max(Height(T->left),Height(T->right));
    }
}
void CreateTree(struct node **T)
{
    int choice,x;
    struct node *p;
    if((*T)==NULL)
    {
      printf("Enter the Data of root node:\n");
      scanf("%d",&x);
      (*T)=GetNode(x);
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
            p=GetNode(x);
            (*T)->left=p;
            CreateTree(&p);
        }
        printf("Whether the right of %d exists?(1/0)",(*T)->data);
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Input the data of right of %d:=>",(*T)->data);
            scanf("%d",&x);
            p=GetNode(x);
            (*T)->right=p;
            CreateTree(&p);
        }
    }
}
void CompleteBinary(struct node *T)
{
    int n,h;
    n=CountNodes(T);

    if(n==0)
        printf("True");
    else
        printf("False");
}
void main()
{
    struct node *ROOT=NULL;
    int s,x;

    CreateTree(&ROOT);
    CompleteBinary(ROOT);
}

