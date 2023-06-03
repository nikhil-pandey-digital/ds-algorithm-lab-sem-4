#include<stdio.h>
void insertionsort(int a[100],int n)
{
    int i,j,x,k;
    for(i=n;i>=2;i--)
    {
       x=a[i];
       j=i-1;
       while(a[j]>x&&j>0)
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=x;
    }
    printf("sorted array:\n");
    for(k=1;k<=n;k++)
        printf("%d ",a[k]);
}
int main()
{
    int n,i,a[100];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    insertionsort(a,n);

}

