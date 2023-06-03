#include<stdio.h>

int n;
void traverse(int X[10],int n)
{
    int i;
     for(i=0;i<n;i++)
        printf("%d ",X[i]);
}
     void main()
     {
         int a[10]={10,25,6,84,65};
         int n=5;
         traverse(a,n);
     }

