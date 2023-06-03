#include<stdio.h>
main()
{
    int sum=0,i,a[10],n;
    printf("enter the size of array from 0 ot10\n");
    scanf("%d",&n);
    printf("enter he elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of the given array is %d\n",sum);
}
