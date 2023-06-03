#include<stdio.h>

    void linear_search(int a[10],int n,int searchkey)

   {    int i,c=0;
       for(i=1;i<=n;i++)
       {
           if(a[i]==searchkey)
       {
           printf("position=%d\n",i);
break;}
else
 c++;
if(c==5)
    printf("-1");
}
if(a[i]!=searchkey)
 c++;
if(c==5)
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
linear_search(a,n,searchkey);
printf("\n");


}
