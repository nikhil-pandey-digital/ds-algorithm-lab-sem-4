#include<stdio.h>

int n;
void traverse(int X[10])
{
    int i;
     for(i=0;i<n;i++)
        printf("%d ",X[i]);
}

     void array_insertion(int a[10],int i,int X)
{
    int  j;
    for(j=n-1;j>=i-1;j--)
        a[j+1]=a[j];
    a[i-1]=X;
    n=n+1;
}

    void sorting(int a[10],int n)
    {
    int p,s,t;
    for(p=0;p<n-1;p++)
    {
        for(s=0;s<n-p-1;s++)
        {
            if(a[s]>a[s+1])
            {
                t=a[s];
                a[s]=a[s+1];
                a[s+1]=t;
            }
        }
    }
    }

 void main()
     {
         int a[10]={10,25,6,84,65};
         n=5;
         traverse(a);
         printf("\n");
         sorting(a,n);
         printf("\n");
         array_insertion(a,3,100);
         printf("\n");
         traverse(a);

     }

