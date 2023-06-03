#include<stdio.h>
int power(int a,int n)
{
    if(n==0)
        return 1;
    else
        return a*power(a,n-1);
}
int main()
{
    int b,p,x;
    printf("enter the base:\n");
    scanf("%d",&b);
    printf("enter the power:\n");
    scanf("%d",&p);
    x=power(b,p);
    printf("\n%d^%d=%d\n",b,p,x);
}
