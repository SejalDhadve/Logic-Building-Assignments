/* Write a recursive program which accept string from user and return its product of digit.
Input : 523
Output : 30  
*/

#include <stdio.h>

int Mult(int iNo)
{
   static int iMult = 1;
   int iDigit = 0;

   if(iNo < 0)
   {
    iNo = -iNo;
   }

   if(iNo != 0)
   {
        iDigit = iNo % 10;
        
        iMult = iMult * iDigit;
        iNo = iNo /10;

        Mult(iNo);
   }
       return iMult;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Product is : %d",iRet);

    return 0;
}

