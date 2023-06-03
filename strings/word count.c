#include<stdio.h>
#include<string.h>
void wordcount(char str[])
{
    int i,c=1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            c++;
        }
        i++;
    }
    printf("\nNumber Of Words:->%d\n",c);
}
void main()
{
    int n,i;
    char str[1000];

    printf("enter the string1:\n");
    gets(str);
    wordcount(str);
}

