#include<stdio.h>
void main()
{
    int a[50][60];
    unsigned int x;
    x=(25*60+30)*sizeof(int);
    printf("\n%u",a);
    printf("\n%u",x);
    printf("\n%u",&a[25][30]);
}

