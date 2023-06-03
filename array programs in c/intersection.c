#include<stdio.h>
void intersection(int a[10],int n,int b[10],int m,int c[10])
{
    int i,j;
    printf("intersection of setA and setB:->");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
printf("%d ",a[i]);



        }
    }
}
void main()
{
    int n,i,m,a[10],b[10],c[10];
    printf("enter the number of elements in setA:->");
    scanf("%d",&n);
    printf("enter the %d elements of setA:->",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number of elements in setB:->");
    scanf("%d",&m);
    printf("enter the %d elements of setB:->",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    intersection(a,n,b,m,c);
    printf("\n");
}
