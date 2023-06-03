#include<stdio.h>
#include<string.h>
void length(char str[])
{
   int i=0;
    while(str[i]!='\0')
{
    i++;
}
printf("\nlength of string:->%d\n",i);
}
void main()
{ int n,i;
    char str[100];

    printf("enter the string:\n");
           gets(str);
    length(str);
}
