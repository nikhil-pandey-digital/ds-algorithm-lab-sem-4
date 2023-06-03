#include<stdio.h>
#include<stdlib.h>
int n;
int pqinsert(int a[],int key)
{ int i,j;
    i=0;
    if(n==0)
    {
        a[0]=key;
    }
    else{
    while(key>=a[i]&&i<n)
    {
        i++;
    }
    for(j=n-1;j>=i;j--)
        a[j+1]=a[j];
    }
    printf("index=%d  \nElements==%d\n",i,a[i]);
    a[i]=key;
    n=n+1;
    return n;
}
    int pqdelete(int a[])
    {
    int x,j,i;
        x=a[0];
        for(j=1;j<n;j++)
            a[j-1]=a[j];
            n=n-1;
            return x;
    }


    void main()
    { int a[10],key,i;
    printf("enter the elements of array:=");
    pqinsert(a,3);
     pqinsert(a,1);
      pqinsert(a,2);
       pqinsert(a,1);
       pqinsert(a,2);
printf("after insertion:\n");
for(i=0;i<n;i++)
    printf("%d ",a[i]);
}



