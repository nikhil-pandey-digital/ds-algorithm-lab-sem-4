#include<stdio.h>

void countsort(int a[100],int n,int j)
{
    int b[100],i,c[10]={0}
    for(i=0;i<n;i++)
    {
        c[(a[i]/j)%10]++;
    }
    for(i=1;i<10;i++)
    {
       c[i]=c[i]+c[i-1];
    }
    for(i=n-1;i>=1;i--)
    {
        b[c[(a[i]/j)%10]-1]=a[i];
        c[(a[i]/j)%10]--;
    }
    for(i=0;i<n;i++)
        a[i]=b[i];
}
            countsort(a,n,j);
        }

 void main()
    {
        int n,i,a[100],b[100];
        printf("enter the no. of element of array");
        scanf("%d",&n);
        printf("enter the %d elements of array",n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        radixsort(a,n);
         for(i=1;i<=n;i++)
        {
            printf("%d ",a[i]);
        }
          printf("\n");
    }


