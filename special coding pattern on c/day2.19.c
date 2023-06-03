#include<stdio.h>
void main()
{
 int n,i,j,k;
 printf("enter the no. of lines");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=n-i+1;j++)
     {
        printf("%d",j);
     }
     for(j=2*(i-1);j>=1;j--)
     {
        printf(" ");
     }
     for(j=n-i+1;j>=1;j--)
     {
        printf("%d",j);
     }
     printf("\n");
 }

}
