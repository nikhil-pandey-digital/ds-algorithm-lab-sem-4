#include<stdio.h>
main()
{
    int i;
    int a[]={1,2,3,4,5};
    int l=sizeof(a)/sizeof(a[0]);
    printf("original array\n");
    for(i=0;i<l;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nreversed array\n");
    for(i=l-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
