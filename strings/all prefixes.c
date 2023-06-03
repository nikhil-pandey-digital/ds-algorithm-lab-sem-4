#include<stdio.h>
#include<string.h>

void prefix(char s[])
{
    int i=0,j=0,k=0;
    while(s[i]!='\0')
    i++;

    for(k=i;k>0;k--)
    {
       for(j=0;j<k;j++)
         printf("%c",s[j]);
         printf("\n");
    }

}
void main()
{ char s[100];

    printf("enter the string");
    gets(s);
    prefix(s);

}

