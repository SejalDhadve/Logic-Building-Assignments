/* Write a program which accepts string from user and reverse that string in place
Input:  "abcd"
Output: "dcba"

Input:  "abba"
Output: "abba"
*/

#include<stdio.h>

void StrRevX(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while(str[j] != '\0')
    {
        j++;
    }
    j--;

    for(i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char arr[20];

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is: %s",arr);

    return 0;
}