/*Accept Character from user and check whether it is capital or not (A-Z)
Input: F
Output: TRUE

Input: d
Output: FALSE
*/

#include<stdio.h>

#define True 1
#define False 0

typedef int bool;

bool ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z') 
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

    bRet = ChkCapital(cValue);

    if(bRet == True)
    {
        printf("It is a Capital character");
    }
    else
    {
        printf("It is not a Capital character");
    }
    
    return 0;
}