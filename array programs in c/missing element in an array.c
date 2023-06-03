#include<stdio.h>
void main()
{
    int a[1000],i,j,n,s1=0,s2=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the element of array from 1 to %d\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
    s1=s1+a[i];
         printf("enter the %d elements with one element missing from the array\n",n-1);
    for(j=0;j<n-1;j++)
        scanf("%d",&a[j]);
for(j=0;j<n-1;j++)
    s2=s2+a[j];
printf("The missing element of the array:->%d",s1-s2);
}
