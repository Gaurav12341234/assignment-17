//7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main()
{
    char str[50];
    int alp_no=0,dig_no=0,spec_no=0,i;
    printf("Enter a string:");
    fgets(str,50,stdin);
    for(i=0;str[i];i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            alp_no++;
        else if(str[i]>='0'&&str[i]<='9')
            dig_no++;
        else
            spec_no++;
    }
    printf("Total number of alphabets is %d\n",alp_no);
    printf("Total number of digits is %d\n",dig_no);
    printf("Total number of special characters is %d\n",spec_no);
    return 0;
}
