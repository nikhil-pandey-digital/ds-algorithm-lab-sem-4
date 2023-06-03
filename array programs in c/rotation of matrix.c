#include<stdio.h>
void main()
{
    int a[50],i,n,d;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the %d elements of array",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the position of rotation");
    scanf("%d",&d);
     printf("\n");
    printf("the elements of array before rotation:->");
    for(i=0;i<n;i++)
           printf("%d ",a[i]);
         printf("\n");
        printf("the elements of array after rotation:->");
    for(i=d;i<n;i++)
        printf("%d ",a[i]);
         for(i=0;i<d;i++)
        printf("%d ",a[i]);
}

