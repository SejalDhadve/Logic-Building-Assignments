/*Accept Character from user and check whether it is digit or not (0-9)
Input: 7
Output: TRUE

Input: d
Output: FALSE
*/

#include<stdio.h>

#define True 1
#define False 0

typedef int bool;

bool ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9') 
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = False;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == True)
    {
        printf("It is a Digit");
    }
    else
    {
        printf("It is not a Digit");
    }
    
    return 0;
}