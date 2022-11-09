//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    char str[20];
    char a;
    int i, count=0;
    printf("Enter string:");
    fgets(str,20,stdin);
    printf("Enter character:");
    scanf("%c",&a);
    for(i=0;str[i];i++)
    {
        if(str[i]==a)
            count++;
    }
    printf("\nOccurence of a given character is %d",count);
    return 0;

}