#include<stdio.h>
#include<math.h>
    int jump_search(int a[10],int n,int searchkey)
   {    int jump,i,low=1;
   jump=sqrt(n);
   for(i=1;i<=n;i=i+jump)
   {
       if(a[i]==searchkey)
        return i;
       else if(a[i]<searchkey)
        low=i;
       else if(a[i]>searchkey)
       break;
   }
   for(i=low;i<=n;i++)
   {
       if(a[i]==searchkey)
        return i;
   }
   return -1;
 }

void main()

{int n,a[10],searchkey,i,j;

printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements of array");
for (i=1;i<=n;i++)
    scanf("%d",&a[i]);
printf("enter the search key");
scanf("%d",&searchkey);
printf("\n");
j=jump_search(a,n,searchkey);
printf("position:->%d",j);
printf("\n");


}


