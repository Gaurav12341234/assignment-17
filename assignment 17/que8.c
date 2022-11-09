//8. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    int i;
    printf("Enter a string:");
    fgets(str1,20,stdin);
    for(i=0;str1[i];i++)
        str2[i]=str1[i];
    printf("string2 is:%s",str2);
    return 0;
}