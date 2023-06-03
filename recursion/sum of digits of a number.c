#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return n%10+sum(n/10);
}
int main()
{
    int n,x;
    printf("enter the number");
    scanf("%d",&n);
    x=sum(n);
    printf("\nsum of digits=%d\n",x);
}
