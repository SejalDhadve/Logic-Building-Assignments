/* Write a program which accept string from user and display it in reverse order
Input: "MarvellouS"
Output: "SuollevraM"
*/

#include<stdio.h>
 
void Reverse(char *str)
{
    int iLength = 0;
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        iLength++;
        iCnt++;
    }

    printf("Reversed string: ");

    for(iCnt = iLength;iCnt >= 0;iCnt--)
    {
        printf("%c",str[iCnt]);
    }
    printf("\n");
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}