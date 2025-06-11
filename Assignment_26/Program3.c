/* Write a program which accepts string from user and accept one character. Return index of first occurence of that character
Input:  "Marvellous Multi OS"
         M
Output: 0
*/

#include<stdio.h>

int FirstChar(char *str,char ch)
{
    int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }
        str++;
        iIndex++;
    }
    return -1;  
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

    iRet = FirstChar(arr,cValue);

    printf("Character index is: %d",iRet);

    return 0;
}