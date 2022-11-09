//10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
int main()
{
    char str[20]="gaurav sharma";
    int temp[150]={0,0};
    int i;
    printf("Enter a string:%s\n",str);
    for(i=0;str[i];i++)
        temp[str[i]]++;
    for(i=0;i<=149;i++)
        if(temp[i])
            printf("Frequency of %c is %d\n",i,temp[i]);
    return 0;
}