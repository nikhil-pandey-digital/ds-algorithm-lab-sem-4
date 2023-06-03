#include<stdio.h>
#include<string.h>
void conversion(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
        else if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
            i++;
    }
    printf("\n:->%s\n",str);

}
void main()
{
    int n,i;
    char str[1000];

    printf("enter the string:\n");
    gets(str);
    conversion(str);
}
