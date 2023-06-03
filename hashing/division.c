#include<stdio.h>
int nearestprime(int n)
{
    int i,j;
    for(i=n;i>=1;i--)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            return i;
            break;
        }
    }
}
int division_hash(int t[],int n,int k)
{ int p,l;
    p=nearestprime(n);
    l=k%p;
    return l;
}
void main()
{
    int L,k,n,i,t[1000];
    printf("Enter the table size");
    scanf("%d",&n);
    printf("enter the keys:=>");
    scanf("%d",&k);
    L=division_hash(t,n,k);
    printf("location=%d",L);


}


