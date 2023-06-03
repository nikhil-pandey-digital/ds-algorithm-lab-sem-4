#include<stdio.h>
void main()

{
    int a[10][10],b[10][10],c[10][10],p,q,m,n,i,j,k;
    printf("enter the order  of first matrix");
    scanf("%d%d",&n,&m);
     printf("enter the order  of second matrix");
    scanf("%d%d",&p,&q);


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
    if(m==p)
    {
     for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<p;k++)
            c[i][j] = 0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];

        }}}
        printf("multiplication of both the matrix is\n");
         for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
        }}
else
    printf("multiplication not possible");
}

