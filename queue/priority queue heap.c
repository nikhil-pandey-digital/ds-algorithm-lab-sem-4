#include<stdio.h>
int n;
int pqinsert(int a[],int x)
{ int j,temp;
    a[n+1]=x;
    j=n+1;
    while(j>1&&a[j]<a[j/2])
    {
        temp=a[j];
        a[j]=a[j/2];
        a[j/2]=temp;
        j=j/2;
    }
    n=n+1;
}
void minheapify(int a[],int i,int n)
{int j,temp;
    while(2*i<=n)
    {
        j=2*i;
        if(j+1<=n)
        {
            if(a[j+1]>a[j])
                j=j+1;
        }
        if(a[j]<a[i])
            {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
            }
        else
            break;
        i=j;
    }
}
int pqdelete(int a[])
    {
    int x;
        x=a[1];
        a[1]=a[n];
        minheapify(a,1,n-1);
            return x;
    }


    void main()
    { int a[10],key,i,x,y;
    pqinsert(a,3);
     pqinsert(a,1);
      pqinsert(a,2);
       pqinsert(a,1);
       pqinsert(a,4);
printf("after insertion:\n");
for(i=1;i<=n;i++)
    printf("%d ",a[i]);
    x=pqdelete(a);
    printf("\nthe 1st deleted element from the above heap is %d\n",x);
            x=pqdelete(a);
    printf("\nthe 2nd deleted element from the above heap is %d\n",x);
}
