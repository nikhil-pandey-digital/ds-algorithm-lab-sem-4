#include<stdio.h>
void main()

{
    int a[10][10],b[10][10],c[10][10],p,q,m,n,i,j;
    printf("enter the order  of first matrix");
    scanf("%d%d",&n,&m);
     printf("enter the order  of second matrix");
    scanf("%d%d",&p,&q);
    if(n==p&&m==q)
       {
           printf("enter the elements of first matrix");
        for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the elements of second matrix");
        for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
    }}
     for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }}
        printf("subtraction of the matrices will becomes\n");
         for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",c[i][j]);
        }
printf("\n");
}}
else
    printf("subtraction not possible");
}


