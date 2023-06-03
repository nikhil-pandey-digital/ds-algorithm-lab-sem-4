#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else if(a>b)
        return gcd(a%b,b);
    else
        return gcd(a,b%a);
}
int main()
{
    int a,b,x,lcm;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    x=gcd(a,b);
    printf("\ngreatest common diviser=%d\n",x);
    lcm=(a*b)/x;
      printf("\nleast common diviser=%d\n",lcm);
}
