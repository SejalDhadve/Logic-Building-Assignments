/* Write a program which accepts string from user and accept one character
 Return index of last occurence of that character
Input:  "Marvellous Multi OS"
         M
Output: 11
*/

#include<stdio.h>

int LastChar(char *str,char ch)
{
     int iIndex = 0;
    int iLastIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastIndex = iIndex;
        }
        str++;
        iIndex++;
    }
    return iLastIndex;
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

    iRet = LastChar(arr,cValue);

    printf("Character index is: %d",iRet);

    return 0;
}