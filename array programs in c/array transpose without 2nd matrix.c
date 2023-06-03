#include<stdio.h>
void main()
{
    int a[10][10],n,m,i,j,t;
    printf("enter the order of the matrix");
    scanf("%d%d",&n,&m);
    printf("enter the elements of the matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {t=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=t;
}}
printf("the transpose of the matrix is:\n");
for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");}
}

