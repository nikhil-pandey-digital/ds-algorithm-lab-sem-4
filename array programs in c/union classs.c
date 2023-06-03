#include<stdio.h>
void traverse(int c[],int x)
{
    int i;
for(i=0;i<x;i++)
    {
    printf("%d ",c[i]);
    }
}
 void sorting(int a[10],int n)
    {
        int p,s,t;
    for(p=0;p<n-1;p++)
    {
        for(s=0;s<n-p-1;s++)
        {if(a[s]>a[s+1])
            {
                t=a[s];
                a[s]=a[s+1];
                a[s+1]=t;
            }
        }
    }
    }
void union_sets(int a[],int n,int b[],int m)
{
    int i=0,j=0,k=0,l=0;
    int c[m+n];
    while(i<n && j<m)
    if(a[i]<b[j])
 {
     c[k]=a[i];
    i=i+1;
    k=k+1;
}
else if(a[i]>b[j])
{
    c[k]=b[j];
    j=j+1;
    k=k+1;
}
else
{
    c[k]=a[i];
    i=i+1;
    l++;
j=j+1;
k=k+1;
}
while(i<n)
{
    c[k]=a[i];
    i=i+1;
    k=k+1;
}
while(j<m)
{
    c[k]=b[j];
    j=j+1;
    k=k+1;
}
printf("Union Of Sets A And B:->");
 traverse(c,m+n-l);
 }
 void main()
    {
        int n,i,m,a[10],b[10],c[20];
        printf("enter the no. of element of 1st array");
        scanf("%d",&n);
        printf("enter the %d elements of 1st array",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
         sorting(a,n);
         printf("\n");
        printf("enter the no. of element of 2nd array");
        scanf("%d",&m);
        printf("enter the %d elements of 2nd array",m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
        }
         sorting(b,m);
         printf("\n");
        union_sets(a,n,b,m);
          printf("\n");
           sorting(c,m+n);
         printf("\n");}


