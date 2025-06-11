/*Accept Character from user and check whether it is alphabet or not (A-Z a-z)
Input: F
Output: TRUE

Input: &
Output: False
*/

#include<stdio.h>

#define True 1
#define False 0

typedef int bool;

bool ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == True)
    {
        printf("It is a character");
    }
    else
    {
        printf("It is not a character");
    }
    
    return 0;
}