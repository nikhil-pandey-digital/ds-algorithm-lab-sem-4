#include<stdio.h>
#include<string.h>
void reverse(char str1[] , char str2[])
{
    int i=0,j,k;

    while(str1[i]!='\0')
{
    i++;
}
j=i-1;
k=i-1;
i=0;
while(i<=j)
   {
    str2[k]=str1[i];
i=i+1;
k=k-1;
   }
printf("\nAfter reverse string:->%s\n",str2);


}
void palindrome(char str1[],char str2[])
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
            printf("\nStrings are palindrome\n");
        else
            printf("\nStrings are not palindrome\n");
}

void main()
{
    int n,i;
    char str1[100],str2[100];

    printf("enter the string1:\n");
    gets(str1);
    reverse(str1,str2);
    palindrome(str1,str2);
}

