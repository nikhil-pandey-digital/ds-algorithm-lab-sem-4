#include<stdio.h>
#include<math.h>
    int interpolation_search(int a[10],int n,int searchkey)
   {    int pos,i,low=1,high=n;
       while(low<=high)
       {
           pos=low+(((searchkey-a[low])/(a[high]-a[low]))*(high-low));
           if(a[pos]==searchkey)
                return pos;
            if(a[pos]<searchkey)
            low=pos+1;
           else
            high=pos-1;

       }
     if(low>high)
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
j=interpolation_search(a,n,searchkey);
printf("position:->%d",j);
printf("\n");


}



