#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
    {
        int i=0;
    char exp[100];
    initialize();
    printf("enter the expression");
    gets(exp);
   while (exp[i]!='\0')
   {
       if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
            push(exp[i]);
       else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
           {
               if(isempty())
               {
                printf("\nExpression is not valid\n");
                exit(1);
               }
               else
                pop();

           }
i++;
       }
       if(isempty())
        printf("\nExpression is valid\n");
       else
         printf("\nExpression is not valid\n");
   }







