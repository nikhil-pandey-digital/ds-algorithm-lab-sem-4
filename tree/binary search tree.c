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

void InOrderTraversal(struct node *T)
{
    if(T!=NULL)
    {
    InOrderTraversal(T->left);
      printf("%d ",T->data);
    InOrderTraversal(T->right);
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
struct node  *BST(struct node **T,int key)
{
    struct node *p;
    p=*T;
    while(p!=NULL)
    {
        if(p->data==key)
           return p;
        else
        {
            if(key<=p->data)
                p=p->left;
            else
                p=p->right;
        }
    }
   return NULL;

}
void main()
{int x;
    struct node *root=NULL,*y;
    CreateTree(&root);


       printf("INORDER TRAVERSAL:=>");
      InOrderTraversal(root);
      printf("\n");
      printf("enter the element you want to search in the tree");
      scanf("%d",&x);
      y=BST(&root,x);
      printf("address of %d=%d",y->data,y);

}


