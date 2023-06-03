#include<stdio.h>

    void binary_search(int a[10],int n,int searchkey)

   {    int i,mid;
   int low=1;
   int high=n;
   while(low<=high)
 {
     mid=(low+high)/2;
   if(a[mid]==searchkey)
   {

    printf("%d",mid);
   break;
   }
   else
   {
       if(searchkey<a[mid])
   high=mid-1;
   else
    low=mid+1;
   }
 }
 if(low>high)
 printf("-1");
   }
void main()

{int n,a[10],searchkey,i;

printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements of array");
for (i=1;i<=n;i++)
    scanf("%d",&a[i]);
printf("enter the search key");
scanf("%d",&searchkey);
printf("\n");
binary_search(a,n,searchkey);
printf("\n");


}

