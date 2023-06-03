#include<stdio.h>
int partition(int a[],int low,int high)
{int i,j,pivot,temp;
    i=low;
    j=high+1;
    pivot=a[low];
    do{
        do{
            i++;
            }
            while(a[i]<pivot);
        do{
            j--;
            }while(a[j]>pivot);
        if(i<j)
         {
               temp=a[i];
    a[i]=a[j];
    a[j]=temp;
         }}
           while (i<j);

   {
         temp=a[j];
    a[j]=a[low];
    a[low]=temp;
   }
    return j;
}

void quicksort(int a[],int low,int high)
{ int j;
    if(low<high)
    {
        j=partition(a,low,high);
    quicksort(a,low,j-1);
    quicksort(a,j+1,high);
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
        quicksort(a,1,n);
          printf("\n");
           for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    }

