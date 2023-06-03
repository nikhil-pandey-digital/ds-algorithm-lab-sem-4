#include<stdio.h>
#include<mylinkedlist.h>
#define TRUE 1
#define FALSE 0

void Initialize(struct node **top)
{
    *top=NULL;
}
void IsEmpty(struct node **top)
{
    if(*top==NULL)
        return TRUE;
    else
        return FALSE;
}
void Push(struct node **top,int x)
{
    InsBeg(top,x);
}
int Pop(struct node **top)
{
    int x;
    if(*top==NULL)
    {
        printf("Stack Overflow");
        exit(1);
    }
    else
    {
        x=DelBeg(top);
        return x;
    }
}

void main()
{
   struct node *top=NULL;
   Push(&top,6);
   Push(&top,5);
   Push(&top,4);
   Push(&top,3);
   Push(&top,2);
   Push(&top,1);
   Traverse(top);
   Pop(&top);
   printf("\n");
   Traverse(top);

}
