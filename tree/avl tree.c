#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node  *left;
    struct node *right;
    int h;
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


    int bf(struct node *T)
    {int hl=0,hr=0;
        if(T->left==NULL)
            hl=0;
        else
            hl=1+T->left->h;
        if(T->right==NULL)
            hr=0;
        else
            hr=1+T->right->h;
            return hl-hr;
    }
    struct node * rotateleft(struct node *x)
    {struct node *y,*z;
        y=x->right;
        z=y->left;
        y->left=x;
        x->right=z;
        return y;
    }
         struct node * rotateright(struct node *x)
    {struct node *y,*z;
        y=x->left;
        z=y->right;
        y->right=x;
        x->left=z;
        return y;
        }
        struct node *LL(struct node *x)
        {
           struct node *y;
           y=rotateright(x);
           return y;
        }
         struct node *RR(struct node *x)
        {
           struct node *y;
           y=rotateleft(x);
           return y;
        }
         struct node *LR(struct node *x)
        {
           struct node *y,*w,*z;
           y=x->left;
           z=rotateleft(y);
           x->left=z;
           w=rotateright(x);
           return w;
        }
         struct node *RL(struct node *x)
        {
           struct node *y,*w,*z;
           y=x->right;
           z=rotateright(y);
           x->right=z;
           w=rotateleft(x);
           return w;
        }
        struct node *INSAVL(struct node *T,int x)
{
    if(T==NULL){
        T=getnode(x);
        T->h=0;}
    else
    {
        if(x<(T)->data){
            (T)->left=INSAVL((T)->left,x);
            if(bf(T)==2)
            {
                if(x<T->left->data)
                    T=LL(T);
                else
                T=LR(T);
            }
        else{
            (T)->right=INSAVL((T)->right,x);
            if(bf(T)==2)
            {
                if(x>T->right->data)
                    T=RR(T);
                else
                T=RL(T);
            }
    }
    }
    }}
void main()
{int x;
    struct node *root=NULL,*y;
    root=getnode(8);
root->data=8;

        root=INSAVL(root,10);
        root=INSAVL(root,20);
        root=INSAVL(root,40);
        root=INSAVL(root,30);
        root=INSAVL(root,50);

       printf("INORDER TRAVERSAL:=>");
      InOrderTraversal(root);
      printf("\n");
      printf("enter the element you want to add in the tree");
      scanf("%d",&x);
      root=INSAVL(root,x);
      printf("INORDER TRAVERSAL:=>");
      InOrderTraversal(root);
      printf("\n");
}






