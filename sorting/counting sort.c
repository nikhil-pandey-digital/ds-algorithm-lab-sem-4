#include<stdio.h>
void countingsort(int a[],int n,int k)
{int b[10],i,c[100];
    for(i=1;i<=k;i++)
    {
        c[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        c[a[i]]++;
    }
    for(i=2;i<=k;i++)
    {
        c[i]=c[i]+c[i-1];
    }
    for(i=n;i>=1;i--)
    {
        b[c[a[i]]]=a[i];
        c[a[i]]=c[a[i]]-1;
    }
     for(i=1;i<=n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    }

 void main()
    {
        int n,i,a[10],b[10],k=0;
        printf("enter the no. of element of array");
        scanf("%d",&n);
        printf("enter the %d elements of 1st array",n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]>k)
                k=a[i];
        }
        countingsort(a,n,k);
          printf("\n");
    }
