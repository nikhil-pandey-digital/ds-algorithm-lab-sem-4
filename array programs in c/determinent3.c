#include<stdio.h>
void main()
{
    int a[10][10],i,j,det;
    printf("enter a 3x3 matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    det=a[1][1]*((a[2][2]*a[3][3])-(a[3][2]*a[2][3]));
    printf("the determinant of the matrix is %d",det);
}
