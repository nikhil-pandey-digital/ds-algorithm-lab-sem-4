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
    { int x,i=0,c=0;
    char str[100],str2[100];
    initialize();
    printf("enter a string");
    gets(str);
    while(str[i]!='\0')
    {
        push(str[i]);
        i++;
    }
    i=0;
    while(!isempty())
    {
        x=pop();
       str2[i]=x;
       i++;
    }
    str2[i]='\0';
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]!=str2[i])
        {
         c++;
        }
 i++;
    }

    if(c>0)
            printf("not Palindrome\n");
            else
                printf("Palindrome\n");



}



