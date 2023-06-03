#include<stdio.h>
void bubblesort(int a[100],int n)
{
    int i,j,c;
    for(i=1;i<=n-1;i++)
    { c=0;
        for(j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                c++;
            }
        }
        if(c==0)
        break;

    }
    printf("sorted array:\n");
    for(j=1;j<=n;j++)
        printf("%d ",a[j]);
}
int main()
{
    int n,i,a[100];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    bubblesort(a,n);

}
