#include<stdio.h>
int fib(int n)
{
    int dat[200]={0};
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
    {if(dat[n]==0)
    {
        dat[n]=fib(n-1)+fib(n-2);
        return dat[n];
    }
    }
}
int main()
{
    int n,x;
    printf("enter the term of fibonacci series which you want:\n");
    scanf("%d",&n);
    x=fib(n);
    printf("\nfibonacci number=%d\n",x);
}
