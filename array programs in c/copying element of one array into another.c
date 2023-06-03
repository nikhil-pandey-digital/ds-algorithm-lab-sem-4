#include<stdio.h>
main()
{
    int a1[]={1,2,3,4,5};
   int i,l;
    l=sizeof(a1)/sizeof(a1[0]);
    int a2[l];
    for(i=0;i<l;i++)
    {a2[i]=a1[i];
    }
    printf("element of original array\n");
    for(i=0;i<l;i++)
    {printf("%d",a1[i]);
}
printf("\nelements of new array\n");
for(i=0;i<l;i++)
    {
        printf("%d",a2[i]);
    }
}
