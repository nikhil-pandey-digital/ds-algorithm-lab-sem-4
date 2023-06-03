#include<stdio.h>

int n;
void traverse(int X[10])
{
    int i;
     for(i=0;i<n;i++)
        printf("%d ",X[i]);
}

     void array_deletion(int a[10],int i)
{
    int  j;
    for(j=i-1;j<=n-1;j++)
        a[j]=a[j+1];

    n=n-1;
}
 void main()
     { int i;
         int a[10]={10,25,6,84,65};
         n=5;
         traverse(a);
         printf("\n");
         array_deletion(a,3);
         printf("\n");
         traverse(a);
array_deletion(a,3);
         printf("\n");
         traverse(a);
     }

