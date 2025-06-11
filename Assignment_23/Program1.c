/* Write a program which displays ASCII table.Table contains symbol,Decimal,Hexadecimal and 
octal repreasentation of every member from 0 to 255.
*/


#include <stdio.h>

void DisplayASCII()
{
    int iCnt;

    printf("___________________________\n");
    printf("| Dec | Hex  | Oct | Symbol |\n");
    printf("___________________________\n");
    for(iCnt = 0; iCnt <= 255; iCnt++) 
    {
        printf("|  %d  |  %x  |  %o  |  %c  |\n", iCnt, iCnt, iCnt, iCnt);
    }
}

int main() 
{
    DisplayASCII();
    
    return 0;
}