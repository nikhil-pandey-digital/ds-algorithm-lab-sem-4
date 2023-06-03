#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
int result(int a,int b,char symbol)
{
    switch(symbol)
          { int x;
         case'+':{x=a+b;return x;break;}
         case'-':{x=a-b;return x;break;}
         case'*':{x=a*b;return x;break;}
         case'^':{x=pow(a,b);return x;break;}
         case'%':{x=a%b;return x;break;}
         case'/':{x=a/b;return x;break;}
         }
}
    void main()
    {
        char postfix[20];
 int a,b;
    initialize();
    printf("enter a postfix expression");
    scanf("%s",postfix);
    char symbol;
    int i=0,j=0,x;
    while(postfix[i]!='\0')
    {
        symbol=postfix[i];
     if(symbol>='0'&&symbol<='9')
       {
           push(symbol-48);
       }
    else
    {
          b=pop();
          a=pop();
          x=result(a,b,symbol);
         push(x);
       }
       i++;
       }
        x=pop();
    printf("\nPostfix Expression(%s)Evaluated Value:=>%d\n",postfix,x);
}


