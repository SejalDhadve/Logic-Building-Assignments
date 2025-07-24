/* Write a recursive program which accept string from user and count number of Small Characters.
Input : HElloWOrlD
Output : 5
*/

#include <stdio.h>

int Small(char *str)
{
   static int iCount = 0;

   if(*str != '\0')
   {
       if((*str >= 'a') && (*str <= 'z'))
       {
           iCount++;
       }
       str++;

       Small(str);
   }
       return iCount;
   
   
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]",arr);

    iRet = Small(arr);

    printf("Number of Small characters are :%d\n",iRet);

    return 0;
}

