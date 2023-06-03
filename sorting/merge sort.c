#include<stdio.h>
int c[10];
void merge(int a[],int low,int mid,int high)
{
    int i=low,j=mid+1,k=low;

    while(i<=mid&&j<=high)
    if(a[i]<a[j])
 {
     c[k]=a[i];
    i=i+1;
    k=k+1;
}
else
{
    c[k]=a[j];
    j=j+1;
    k=k+1;
}
while(i<=low)
{
    c[k]=a[i];
    i=i+1;
    k=k+1;
}
while(j<=high)
{
    c[k]=a[j];
    j=j+1;
    k=k+1;
}
for(i=low;i<=high;i++)
{
    a[i]=c[i];
}
}
void merge_sort(int a[],int low,int high)
{ int mid;
    if(low<high)
    {
        mid=(low+(high-low))/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
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
        merge_sort(a,1,n);
          printf("\n");
           for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    }

