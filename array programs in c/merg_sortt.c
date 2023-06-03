#include<stdio.h>
void merging(int a[],int n,int b[],int m)
{
    int i=0,j=0,k=0;
    int c[m+n];
    while(i<n&&j<m)
    if(a[i]<b[j])
 {
     c[k]=a[i];
    i=i+1;
    k=k+1;
}
else
{
    c[k]=b[j];
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
//return c;
traverse(c,m+n);
return c;
}
void traverse(int c[],int x)
{int i;
for(i=0;i<x;i++)
{
    printf("%d ",c[i]);
}
}
           void main()
    {
        int n,i,x,m,a[10],b[10],c[100];
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
        x=m+n;
        merging(a,n,b,m);
          printf("\n");
        printf("\n");
    }

