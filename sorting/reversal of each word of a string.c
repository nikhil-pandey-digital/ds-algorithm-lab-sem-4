#include<stdio.h>
#include<string.h>
void wordcount(char str[])
{
    int i,t,j;
    while(str[i]!='\0')
    {
        i++;
    }
    j=i;
    i=0;
 while(i!=j)
    {
        if(str[i]==' ')
        {
           t=str[i];
           str[i]=str[j];
           str[j]=t;
        }
        i++;
        j--;
    }
    printf("after reversing of each word of string we get=%s",str);
}
void main()
{
    int n,i;
    char str[1000];

    printf("enter the string1:\n");
    gets(str);
    wordcount(str);
}


