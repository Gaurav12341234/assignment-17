//4. Write a program to convert a given string into uppercase.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    printf("Enter your name:");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
        printf("%c",str[i]);
    }
    return 0;
}