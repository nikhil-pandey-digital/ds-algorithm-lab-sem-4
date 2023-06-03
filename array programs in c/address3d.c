#include<stdio.h>
void main()
{
    int a[50][50][50],i;
    unsigned int x;
    x=(50*20*60+25*60+35)*sizeof(int);
    printf("\n%u",a);
    printf("\n%u",x);
    printf("\n%u",&a[20][25][35]);
}
