#include<stdio.h>
#include<stdlib.h>
int reverse(int n)
{
    static r,sum=0;
    if(n>0)
    {
    r=n%10;
    sum=sum*10+r;
    reverse(n/10);
     return sum;
     }
     else
        return 0;


}
void main()
{
    int n,x;
    printf("enter a number");
    scanf("%d",&n);
    x=reverse(n);
    printf("\nafter reversing the number=%d\n",x);

}
