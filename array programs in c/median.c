#include<stdio.h>
main()
{
    int a[20],i,j,t,n;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
            if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }


    for(i=0;i<n;i++)
        printf("%d,",a[i]);
        int median=0;
        if(n%2==0)

            median=(a[n/2]+a[(n-1)/2])/2;
            else
                median=a[(n)/2];

        printf("median=%d",median);
}
