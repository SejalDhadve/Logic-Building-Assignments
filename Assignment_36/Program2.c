/* Write a program which display all palindrome elements of singly linear linked list.

Input linked list : |11|->|28|->|17|->|414|->|6|->|89|

Output : 11  6  414
*/

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void DisplayPalindrome(PNODE head)
{
    int iDigit = 0;
    int iRev = 0;
    int iNo = 0;

    printf("Palindrome elements are :\n");

    while(head != NULL)
    {
        iRev = 0;
        iNo = head->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;
        }
        if(iRev == head->data)
        {
            printf("%d\t",head->data);
        }
        head = head->next;
    }
    printf("\n");
}  

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d | ->",head->data);
        head = head -> next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,414);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);

    DisplayPalindrome(First);

    return 0;
} 