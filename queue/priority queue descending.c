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
    while(key<=a[i]&&i>=0)
    {
        i++;
    }
    for(j=i;j<=n-1;j++)
        a[j+1]=a[j];
    }
    a[i]=key;
    n=n+1;
    return n;
}
    int pqdelete(int a[])
    {
    int x;
        x=a[n-1];
        n--;
            return x;
    }

 void main()
    { int a[10],key,i;
    pqinsert(a,3);
     pqinsert(a,1);
      pqinsert(a,2);
       pqinsert(a,1);
       pqinsert(a,2);
printf("after insertion:\n");
for(i=0;i<n;i++)
    printf("%d ",a[i]);
    pqdelete(a);
    printf("\n");
    printf("after deletion:\n");
for(i=0;i<n;i++)
    printf("%d ",a[i]);
}





