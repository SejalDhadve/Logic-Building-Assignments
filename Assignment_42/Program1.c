/* Write a recursive program which accept from user and display below pattern
Input : 5
Output : 5  *  4  *  3  *  2  *  1  *
*/

#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo > 0)
    {
        printf("%d\t * \t",iNo);
        Display(iNo - 1);
    }
    else 
    {
        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

