/* Write a program which accept string from user and convert it into lower case
Input: "Marvellous Multi OS"
Output: marvellous multi os
*/

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32; 
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);
    
    printf("Modified string is: %s",Arr);

    return 0;
}