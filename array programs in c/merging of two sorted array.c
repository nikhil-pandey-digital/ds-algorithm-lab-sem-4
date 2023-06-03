#include<stdio.h>
void traverse(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void sorting(int a[10],int n)
{
    int s,p,t;
    for(p=0;p<n-1;p++)
    {
        for(s=0;s<n-p-1;s++)
        {
            if(a[s]>a[s+1])
            {
                t=a[s];
                a[s]=a[s+1];
                a[s+1]=t;



            }
        }
    }
}
void merging(int a[10],int n,int b[10],int m,int c[10],int x)
{
    int i;
    x=n+m;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];

    }
    for(i=0;i<m;i++)
    {
        c[i+n]=b[i];

    }
for(i=0;i<x;i++)
{
    printf("%d ",c[i]);
}
}
    void main()
    {
        int n,i,x,m,a[10],b[10],c[10];
        printf("enter the no. of element of 1st and 2nd array");
        scanf("%d%d",&n,&m);
        printf("enter the %d elements of 1st array",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("enter the %d elements of 2nd array",m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
        }
        traverse(a,n);
        printf("\n");
        traverse(b,m);
        printf("\n");
        sorting(a,n);
   traverse(a,n);
        printf("\n");
          sorting(b,m);
 traverse(b,m);
        printf("\n");
           merging(a,n,b,m,c,x);
            printf("\n");
            sorting(c,x);

    }
