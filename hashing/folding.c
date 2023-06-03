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
int folding(int t[],int n,int k)
{
 int sum=0,r,l,a;
 a=digits(n-1);
 while(k!=0)
 {
     r=k%power(10,a);
     sum=sum+r;
     k=k/power(10,a);

 }
   l=sum%n;
 return l;
}

void main()
{
    int L,k,n,i,t[1000];
    printf("Enter the table size");
    scanf("%d",&n);
    printf("enter the keys:=>");
    scanf("%d",&k);
    L=folding(t,n,k);
    printf("location=%d",L);


}




