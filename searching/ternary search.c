#include<stdio.h>

    int ternary_search(int l,int h,int a[100],int searchkey)

   {    int i,mid1,mid2,n;

   while(l<=h)
 {
mid1=l+(h-l)/3;
      mid2=h-(h-l)/3;


   if(a[mid1]==searchkey)
   {
    printf("positon=%d",mid1);
    break;
   }
    if(a[mid2]==searchkey)
   {
    printf("position=%d",mid2);
    break;
   }
       if(searchkey<a[mid1])
 {
h=mid1-1;
}
else if(searchkey>mid2)
{
   l=mid2+1;
}
else
{
    h=mid2-1;
    l=mid1+1;
 }}
if(l>h)
    printf("-1");
   }
int main()

{int n,a[100],h,l,searchkey,i,s;
 l=1;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements of array");
for (i=1;i<=n;i++)
    scanf("%d",&a[i]);
printf("enter the search key");
scanf("%d",&searchkey);
printf("\n");
h=n;
ternary_search(l,h,a,searchkey);
printf("\n");
}



