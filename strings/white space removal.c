#include<stdio.h>
#include<string.h>
void replace(char str[])
{
    int i=0,j,k=0;
      while(str[i]!='\0')
{
    i++;
}

    while(str[k]!='\0')
    {
        if(str[k]==' ')
        {
            for(j=k;j<i;j++)
        {
         str[j]=str[j+1];
        }
             i--;
        }
      k++;
    }
    printf("\n%s\n",str);
}
void main()
{
    int n,i;
    char str[1000];

    printf("enter the string1:\n");
    gets(str);
    replace(str);
}

