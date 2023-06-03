 #include<iostream>
#define True 1
#define False 0
using namespace std;
int isleft(struct node *p,struct node *father);
int isright(struct node *p,struct node *father);
struct node *BSTMinimum1(struct node *T);
struct node *BSTSuccessor1(struct node *p);
struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *father;
};
struct node *getnode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->left=NULL;
    p->right=NULL;
    return p;
}
void FreeNode(struct node *P)
{
    free(P);
}
void BSTInsert(struct node **T,int x)
{
    struct node *p,*r=getnode(),*q;
    p=*T;
    q=NULL;
    r->data=x;
    if(*T!=NULL)
    {
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
    else
        (*T)=r;
}
struct node *BSTSearch(struct node **T,int key)
{
    struct node *p=*T;
    while(p!=NULL)
    {
        if(p->data==key)
            return p;
        else if(key<p->data){
            p=p->left;}
        else{
            p=p->right;}
    }
    return NULL;
}
void InOrderTraversal(struct node *T)
{
    if(T!=NULL)
    {
        InOrderTraversal(T->left);
        cout<<T->data<<endl;
        InOrderTraversal(T->right);
    }
}
struct node *Search(struct node *T,int x)
{
    struct node *q;
    if(T!=NULL){
       q=T;
       while(q->data!=x){
        if(x<q->data){
            q=q->left;}
        else{
            q=q->right;}}
      }
       return q;}
struct node *fatherfind(struct node *T,int x)
{
    struct node *father=NULL;
    struct node *q;
    if(T!=NULL){
       q=T;
       while(q->data!=x){
        if(x<q->data){
            father=q;
            q=q->left;}
        else{
            father=q;
            q=q->right;}}}
       return father;}
int isleft(struct node *p,struct node *father){
    cout<<"p="<<p->data <<endl<<"father="<<father->data<<endl;
    if(p->father->left==p)
        return True;
    else
        return False;
}
int isright(struct node *p,struct node *father){
    if(p->father->right==p)
        return True;
    else
        return False;
}
int BSTdelete(struct node *p,struct node *father){
    int x,y,a,b;
    struct node *q,*r;
    a=isleft(p,father);
    b=isright(p,father);
    cout<<b<<endl;
    if(p->left==NULL && p->right==NULL){
        if(a==1)
            p->father->left=NULL;
        else
            if(b==1)
               p->father->right=NULL;
        x=p->data;
        FreeNode(p);
        return x; }
    else if(p->left==NULL || p->right==NULL){
        q=p->father;
        if(p->left==NULL)
            r=p->right;
        else
            r=p->left;
        r->father=q;
        if(isleft(p,father))
            q->left=r;
        else
            q->right=r;
        x=p->data;
        FreeNode(p);
        return x;}
    else{
        q=BSTSuccessor1(p);
        cout<<q->data<<endl;
        x=p->data;
        y=BSTdelete(q,father);
        p->data=y;
        return x;}}
struct node *BSTSuccessor1(struct node *p)
{
    struct node *q;
    if(p->right!=NULL)
    {
        return BSTMinimum1(p->right);
    }
    else
    {
        q=p->father;
        while(q!=NULL && q->right==p){
            p=q;
            q=q->father;
        }
    }
    return q; }
struct node *BSTMinimum1(struct node *T)
{
    struct node *q=T;
    while(q->left!=NULL)
    {
        q=q->left;
    }
    return q;
}
int BSTMinimum(struct node *T)
{
    struct node *q=T;
    while(q->left!=NULL)
    {
        q=q->left;
    }
    return q->data;
}
int BSTMaximum(struct node *T)
{
    struct node *q=T;
    while(q->right!=NULL)
    {
        q=q->right;
    }
    return q->data;
}
int BSTSuccessor(struct node *p)
{
    struct node *q;
    if(p->right!=NULL)
    {
        return BSTMinimum(p->right);
    }
    else
    {
        q=p->father;
        while(q!=NULL && q->right==p){
            p=q;
            q=q->father;
        }
    }
    return q->data; }
/*int BSTPredecessor(struct node *p)
{
    struct node *q=NULL;
    if(p->left!=NULL)
    {
        return BSTMaximum(p->left);
    }
    else
    {
        q=p->father;
        while(q!=NULL && q->left==p){
            p=q;
            q=q->father;
        }
    }
    return q->data; }*/
    int main()
    {
        struct node *root=NULL,*father=NULL,*y;
        int a;
        BSTInsert(&root,75);
        BSTInsert(&root,25);
        BSTInsert(&root,95);
        BSTInsert(&root,150);
        BSTInsert(&root,100);
        BSTInsert(&root,50);
        InOrderTraversal(root);
        y=BSTSearch(&root,25);
        cout<<endl<<y<<endl;
        cout<<y->data<<endl;
        //y=BSTSearch(&root,22);
        //cout<<endl<<y<<endl;
        a=BSTMinimum(root);
        cout<<"minimum="<<a<<endl;
        a=BSTMaximum(root);
        cout<<"maximum="<<a<<endl;
        y=Search(root,95);
        a=BSTSuccessor(y);
        cout<<"successor is "<<a<<endl;
       /* y=Search(root,50);
        a=BSTPredecessor(y);
        cout<<"Predecessor is "<<a<<endl;*/
        father=fatherfind(root,150);
        cout<<father<<endl;
        cout<<father->data<<endl;
        y=Search(root,150);
         cout<<y<<endl;
        cout<<y->data<<endl;
        a=BSTdelete(y,father);
        cout<<a<<endl;
    }
