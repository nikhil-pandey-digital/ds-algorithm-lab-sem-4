#include<stdio.h>
void binarysearch(int a[],int low,int high,int searchkey)
{ int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
        if(mid==searchkey)
            printf("%d",mid);
        else
        {
            if(searchkey<a[mid])
                binarysearch(a,low,mid-1,searchkey);
            else
                binarysearch(a,mid+1,high,searchkey);
        }
    }
 else
    printf("-1");

}
void main()
{
    int a[10],n,low,high,i,searchkey;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the search key");
    scanf("%d",&searchkey);
    low=0;
    high=n-1;
    binarysearch(a,low,high,searchkey);

}
