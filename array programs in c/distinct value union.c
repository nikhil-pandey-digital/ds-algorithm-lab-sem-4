
#include<stdio.h>
 main()
{
    int a[10],b[10],c[10],i,j,k=0,n1,n2;
    printf("enter the number of elements of set A");
    scanf("%d",&n1);
    printf("enter the elements of set A");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
     printf("enter the number of elements of set B");
    scanf("%d",&n2);
    printf("enter the elements of set B");
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n1;i++)
   {
           c[i]=a[i];
       }
    for(i=0;i<n2;i++)
    {
    c[i+n1]=b[i];
}
        printf("the union of set A and B:-\n");
        for(i=0;i<n1+n2;i++)
            printf("%d ",c[i]);
}
