#include<stdio.h>
main()
{
    int a[10],i,sum=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    {
        for(i=0;i<3;i++)
        {
            sum=sum+a[i];
        }
    }
    printf("sum is %d",sum);
}
