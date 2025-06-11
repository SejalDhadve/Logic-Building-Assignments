/* Write a program which accepts string from user and accept one character. Return frequency of that character
Input:  "Marvellous Multi OS"
         M
Output: 2
*/

#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character:");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character frequency is: %d",iRet);

    return 0;
}