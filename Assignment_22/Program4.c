/*Accept Character from user and check whether it is small case or not (a-z)
Input: g
Output: TRUE

Input: D
Output: FALSE
*/

#include<stdio.h>

#define True 1
#define False 0

typedef int bool;

bool ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z') 
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

    bRet = ChkSmall(cValue);

    if(bRet == True)
    {
        printf("It is Small case character");
    }
    else
    {
        printf("It is not Small case character");
    }
    
    return 0;
}