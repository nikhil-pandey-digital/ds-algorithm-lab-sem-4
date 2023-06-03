#include<stdio.h>
void toh(int n,char s,char m,char d)
{
    if(n==1)
        printf("transfer disk from %c to %c    ",s,d);
    else
    {
        toh(n-1,s,d,m);
        printf("transfer the disk from %c to %c \n",s,d);
        toh(n-1,m,s,d);

    }
}
void main()
{
    int n;
    char s='s',m='m',d='d';
    printf("enter the n");
    scanf("%d",&n);
    toh(n,s,m,d);
}
