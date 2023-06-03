#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define STACKSIZE 100
struct stack
{
    int item[STACKSIZE];
    int top;

};
struct stack s;
void initialize(void)
{
    s.top=-1;
}
void  push(int x)
{
    if(s.top==STACKSIZE-1)
       {
           printf("stack overflows");
         exit(1);
       }
        s.top=s.top+1;
     s.item[s.top]=x;
}
    int pop(void)
    { int x;
        if(s.top==-1)
        {
            printf("stack underflows");
            exit(1);
        }
            x=s.item[s.top];
            s.top=s.top-1;
            return x;
    }
    int isempty(void)
    {
        if(s.top==-1)
            return TRUE;
        else
            return FALSE;
    }
    int stacktop(void)
    { int x;
        x=s.item[s.top];
        return x;
    }
    void main()
    { int y,n,r,x;
    initialize();
    printf("enter a decimal number");
   scanf("%d",&n);
   while(n!=0)
   {
       r=n%2;
       push(r);
       n=n/2;
   }
       while(!isempty())
       {
           x=pop();
           printf("%d",x);
       }



}
