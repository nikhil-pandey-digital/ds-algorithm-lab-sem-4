#include<stdio.h>
void main()
{
 int n,i,j,k;
 printf("enter the no. of lines");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=i;j++)
     {
        printf("%d",j);
     }
     for(j=1;j<=2*(n-i);j++)
     {
        printf(" ");
     }
     for(j=i;j>=1;j--)
     {
        printf("%d",j);
     }
     printf("\n");
 }

}
