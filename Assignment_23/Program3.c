/*Accept character from user.If it is capital then display all the charcaters from the input characters till Z.If input character is small
then print all the charcters in reverse order till a.In other cases return directly.
Input : Q
Output : Q R S T U V W X Y Z
*/

#include<stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')  
    {
        while (ch <= 'Z')
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    else if (ch >= 'a' && ch <= 'z') 
    {
        while (ch >= 'a')
        {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }

    else 
    {
        printf("Invalid input \n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the charcater:");
    scanf(" %c",&cValue);

    Display(cValue);

    return 0;
}