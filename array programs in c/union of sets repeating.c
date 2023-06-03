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
    //copy the elements of setA into setC
    for(i=0;i<n1;i++)
   {
       for(j=0;j<k;j++)
       {
           if(c[j]==a[i])
            break;
       }
    {if(j==k)
    {
        c[j]=a[i];
        k++;
    }}}
    for(i=0;i<n2;i++)
    {
     for(j=0;j<k;j++)
       {
           if(c[j]==b[i])
            break;
       }
    {if(j==k)
    {
        c[j]=b[i];
        k++;
    }}}


        printf("the union of set A and B:-\n");
        for(i=0;i<k;i++)
            printf("%d ",c[i]);
}

