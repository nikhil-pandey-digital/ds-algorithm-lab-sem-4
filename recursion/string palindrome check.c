#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void palindrome(char str1[],int i,int j)
{
if(i==j)
    printf("string is palindrome");
else
            {
            if(str1[i]==str1[j])
                    palindrome(str1,i+1,j-1);
            else
                 printf("strings is not palindrome");

            }

}



void main()
{
    int n,i,j;
    char str1[100];
    printf("enter the string1:\n");
    gets(str1);
     j=strlen(str1);
     i=0;
    palindrome(str1,i,j-1);
}


