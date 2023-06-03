#include<stdio.h>
#include<string.h>
void frequencycount(char str[])
{
int dat[26]={0},i=0,k;
char k;
while(str[i]!='\0')
{
    j=str[i]-97;
    dat[j]=dat[j]+1;
    i++;
}
    for(k=0;k<26;k++)
    {
        if(dat[k]!=0)
    {
        printf("\n%c=%d\n",97+k,dat[k]);

    }
    }
}
void main()
{
    int n,i;
    char str[1000];

    printf("enter the string1:\n");
    gets(str);
    frequencycount(str);
}
