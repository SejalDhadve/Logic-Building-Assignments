/* Write a program which accept 2 string from user and concat second string after first string(implement strcat() function)
Input: "Marvellous Infosystem"
       "Logic Building"
Output: "Marvellous Infosystem Logic Building"     
*/

#include<stdio.h>

void StrCatX(char *src,char *dest)
{
    if(src == NULL || dest == NULL)
    {
        return;
    }
    
    while(*src != '\0')
    {
        src++;
    }
    *src = ' ';
    src++;
    while(*dest != '\0') 
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0'; 
}

int main()
{
    char arr[30] = "Marvellous Infosystem";
    char brr[30] = "Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr);

    return 0;
}