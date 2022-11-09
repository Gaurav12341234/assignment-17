//6. Write a program to reverse a string.
#include<stdio.h>
int main()
{
    char str[20];
    char temp;
    int i,count=0;
    printf("Enter your name:");
    fgets(str,20,stdin);
    printf("Reverse a name:");
    for(i=0;str[i];i++)
        count++;
    for(i=0;i<count/2;i++)
    {
        temp=str[i];
        str[i]=str[count-i-1];
        str[count-i-1]=temp;
    }
    printf("%s",str);
    return 0;
}