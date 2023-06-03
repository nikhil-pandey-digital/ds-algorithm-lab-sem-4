#include<stdio.h>
int digits(int n)
{
    int a,c=0;
   while(n!=0)
   {
    a=a%10;
    n=n/10;
    c++;
   }
    return c;

}
int power(int a,int b)
{int r=1,i;
    for(i=1;i<=b;i++)
        r=r*a;
        return r;
}
int mid_square(int t[],int n,int k)
{ int e,l,a,b;
    a=digits(n-1);
    b=digits(k);
    k=k*k;
    e=(2*b-a)/2;
    k=k/(power(10,e));
    l=k%power(10,a);
    l=l%n;
    return l;
}
void main()
{
    int L,k,n,i,t[1000];
    printf("Enter the table size");
    scanf("%d",&n);
    printf("enter the keys:=>");
    scanf("%d",&k);
    L=mid_square(t,n,k);
    printf("location=%d",L);


}



