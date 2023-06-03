#include<stdio.h>
void spiral_print(int r,int c,int a[100][100])
{
    int k=0,l=0,i;
    printf("the matrix in the spiral from:->");
    while(k<r&&l<c)
      {
          for(i=l;i<c;i++)
        printf("%d ",a[k][i]);
    k++;
    for(i=k;i<r;i++)
      printf("%d ",a[i][c-1]);
    c--;
    if(k<r)
        for(i=c-1;i>=l;i--)
        printf("%d ",a[r-1][i]);
    r--;
        if(l<c)
    for(i=r-1;i>=k;i--)
     printf("%d ",a[i][l]);
     l++;
      }
}
void main()
{
     int a[100][100],i,r,j,c;
    printf("enter the no. of rows of array");
    scanf("%d",&r);
    printf("enter the no. of column of array");
    scanf("%d",&c);
    printf("enter the %dX%d elements of array",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&a[i][j]);
    }}
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        printf("%d ",a[i][j]);}
        printf("\n");
    }
    printf("\n");
    spiral_print(r,c,a);
     printf("\n");
}
