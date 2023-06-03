#include<stdio.h>
#include<string.h>
void concatinate( char str1[],char str2[],char str3[])
{
    int i=0,j=0,k=0;


    while(str1[i]!='\0')
        {
            str3[k]=str1[i];
               i=i+1;
               k=k+1;
        }
        while(str2[j]!='\0')
        {
            str3[k]=str2[j];
               j=j+1;
               k=k+1;
        }
        str3[k]='\0';
        printf("\nAfter Concatination:->%s\n",str3);
}

void main()
{

    char str1[100],str2[100],str3[200];

    printf("enter the string1:\n");
    gets(str1);
    printf("enter the string2:\n");
    gets(str2);
    concatinate(str1,str2,str3);
}



