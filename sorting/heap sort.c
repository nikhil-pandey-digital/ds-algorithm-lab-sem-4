#include<stdio.h>

void heapsort(int a[],int n)
{int j,i,temp;
    maxheap(a,n);
    for(j=n;j>=2;j--)
    {
        temp=a[1];
        a[1]=a[j];
        a[j]=temp;
        maxheapify(a,1,j-1);
    }
}
void maxheap(int a[],int n)
{int i;
    for(i=n/2;i>=1;i--)
        maxheapify(a,i,n);
}
void maxheapify(int a[],int i,int n)
{int j,temp;
    while(2*i<=n)
    {
        j=2*i;
        if(j+1<=n)
        {
            if(a[j+1]>a[j])
                j=j+1;
        }
        if(a[j]>a[i])
            {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
            }
        else
            break;
        i=j;
    }
}
 void main()
    {
        int n,i,a[10];
        printf("enter the no. of element of array");
        scanf("%d",&n);
        printf("enter the %d elements of 1st array",n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        heapsort(a,n);
          printf("\n");
           for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    }
