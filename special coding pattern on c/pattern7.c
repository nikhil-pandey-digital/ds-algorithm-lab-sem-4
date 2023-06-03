#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("enter the no. of lines");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++);
        {
            printf(" ");
        }
        for(k=1;k<=2*(n-i)-1;k+=2)
        {
            printf("*");
        }
        printf("\n");
    }
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++);
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k+=2)
        {
            printf("*");
        }
        printf("\n");
    }
}
