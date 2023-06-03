#include<stdio.h>
int power(int b,int p)
{int t;
    if(p==0)
        return 1;
    else
        t=power(b,p/2);
    if(p%2==0)
        return t*t;
    else
        return b*t*t;
}
void main()
{int b,p,x;
    printf("enter the base");
    scanf("%d",&b);
    printf("enter the power");
    scanf("%d",&p);
    x=power(b,p);
    printf("%d^%d=%d",b,p,x);


}
