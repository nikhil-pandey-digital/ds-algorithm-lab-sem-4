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
typedef struct stack stack;
void initialize(stack *s)
{
    s->top=-1;


}
void  push(stack *s,int x)
{
    if(s->top==STACKSIZE-1)
       {
           printf("stack overflows");
         exit(1);
       }
        s->top=s->top+1;
     s->item[s->top]=x;
}
    int pop(stack *s)
    { int x;
        if(s->top==-1)
        {
            printf("stack underflows");
            exit(1);
        }
            x=s->item[s->top];
            s->top=s->top-1;
            return x;
    }
    int isempty(stack *s)
    {
        if(s->top==-1)
            return TRUE;
        else
            return FALSE;
    }
    int stacktop(stack *s)
    { int x;
        x=s->item[s->top];
        return x;
    }

    void enqueue(stack *s,int x)
    {
        push(s,x);
    }
    int dequeue(stack *s1,stack *s2)
    {int x,y;
        while(!isempty(s1))
        {
            x=pop(s1);
            push(s2,x);
        }
        y=pop(s2);
    while(!isempty(s2))
    {
        x=pop(s2);
        push(s1,x);
    }
    return y;
    }

    void main()
    { int y;
    stack s1,s2;
    initialize(&s1);
     initialize(&s2);
     enqueue(&s1,1);
       enqueue(&s1,2);
         enqueue(&s1,3);
           enqueue(&s1,4);


  y=dequeue(&s1,&s2);
  printf("\npopped value:=>%d\n",y);
   y=dequeue(&s1,&s2);
  printf("\npopped value:=>%d\n",y);




}

