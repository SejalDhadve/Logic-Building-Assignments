/* Write a program which accept string from user and return difference between frequency of small character and frequency of 
Capital characters
Input: "MarvellouS"
Output: 6  (8-2)
*/

#include<stdio.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }
        str++;
    }

    return iSmall - iCapital;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);
    
    printf("%d",iRet);

    return 0;
}