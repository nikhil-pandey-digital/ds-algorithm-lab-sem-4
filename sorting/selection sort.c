#include<stdio.h>
void selectionsort(int a[100],int n)
{
    int i,j,min;
    for(i=1;i<=n-1;i++)
    { min=i;
        for(j=i+1;j<=n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        int temp=a[i];
                a[i]=a[min];
                a[min]=temp;
    }
    printf("sorted array:\n");
    for(j=1;j<=n;j++)
        printf("%d ",a[j]);
}
int main()
{
    int n,i,a[100];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    selectionsort(a,n);

}

