#include<stdio.h>
#include<string.h>
void reverse(char str[])
{
    int i=0,j,t;

    while(str[i]!='\0')
{
    i++;
}
j=i-1;
i=0;
while(i<j)
   {
    t=str[i];
str[i]=str[j];
str[j]=t;
i=i+1;
j=j-1;
   }
printf("\nAfter reverse string:->%s\n",str);


}
void main()
{ int n,i;
    char str[100];

    printf("enter the string:\n");
           gets(str);
    reverse(str);
}

