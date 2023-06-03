#include<stdio.h>
#include<string.h>
void compare(char str1[],char str2[])
{
    int i=0;

    while(str1[i]!='\0'||str2[i]!='\0')
        {
            if(str1[i]==str2[i])
               i=i+1;
           else
            break;
        }
        if(str1[i]=='\0'&&str2[i]=='\0')
            printf("\nStrings are same\n");
        else
            printf("\nStrings are not same\n");
}

void main()
{
    int n,i;
    char str1[100],str2[100];

    printf("enter the string1:\n");
    gets(str1);
    printf("enter the string2:\n");
    gets(str2);

    compare(str1,str2);
}


