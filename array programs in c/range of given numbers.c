#include<stdio.h>
main()
{
    int big=0,small=0,range,a[10],i,n;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
   {scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    if(a[i]>big)
    {
        big=a[i];
        small=big;
}}
for(i=0;i<n;i++)
{
if(a[i]<small)
{
    small=a[i];
}}
range=big-small;

printf("smallest number is %d\n",small);
printf("biggest number is %d\n",big);
printf("range is %d\n",range);
}
