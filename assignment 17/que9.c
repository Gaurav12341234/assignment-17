//9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
int main()
{
    char str[20],temp;
    int i,j;
    printf("Enter a string:");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        for(j=i+1;str[j];j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("String in ascending order is: %s",str);
    return 0;
}