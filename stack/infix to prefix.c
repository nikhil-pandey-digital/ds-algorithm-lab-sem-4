#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define STACKSIZE 100
struct stack
{
    char item[STACKSIZE];
    int top;

};
struct stack s;
void initialize(void)
{
    s.top=-1;
}
void  push(char x)
{
    if(s.top==STACKSIZE-1)
       {
           printf("stack overflows");
         exit(1);
       }
        s.top=s.top+1;
     s.item[s.top]=x;
}
    char pop(void)
    { char x;
        if(s.top==-1)
        {
            printf("stack underflows");
            exit(1);
        }
            x=s.item[s.top];
            s.top=s.top-1;
            return x;
    }
    char isempty(void)
    {
        if(s.top==-1)
            return TRUE;
        else
            return FALSE;
    }
    char stacktop(void)
    { char x;
        x=s.item[s.top];
        return x;
    }
    int prcd(char a,char b)
    {
        if(a=='^'||a=='*'||a=='/'||a=='%')
            if(b=='^')
               return FALSE;
            else
              return TRUE;
        else
            if(a=='+'||a=='-')
             if(b=='+'||b=='-')
             return TRUE;
             else
                return FALSE;


    }
    void main()
    {
        char postfix[20],prefix[20],infix[20];

    initialize();
    printf("enter a infix expression");
    scanf("%s",infix);
    char symbol,x;
    int i=0,j=0,n;
    while(infix[i]!='\0')
    {
        symbol=infix[i];
     if(symbol>='a'&&symbol<='z')
       {
           postfix[j]=symbol;
         j++;
       }
     else
     {
        while(!isempty()&&prcd(stacktop(),symbol))
     {
         x=pop();
         postfix[j]=x;
         j++;
     }
     push(symbol);
     }
     i++;
    }
    while(!isempty())
    {
        x=pop();
    postfix[j]=x;
    j++;
    }
    postfix[j]='\0';
    n=j-1;
    j=0;
    while(postfix[j]!='\0')
    {
        prefix[n]=postfix[j];
        n--;
        j++;
    }
    postfix[n]='\0';
    printf("\nprefix expression:->%s\n",prefix);


}

