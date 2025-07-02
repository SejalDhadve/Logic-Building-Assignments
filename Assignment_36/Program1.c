/* Write a program which reverse each element of singly linear linked list.

Input linked list : |11|->|28|->|17|->|41|->|6|->|89|

Output : |11|->|82|->|71|->|14|->|6|->|98|
*/

#include <stdio.h>
#include <stdlib.h>

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

void Reverse(PNODE head)
{
    int iRev = 0;

    printf("Reversed Elements are : ");

    while(head != NULL)
    {
       iRev = 0;

       while(head->data != 0)
       {
       iRev = (iRev * 10) + (head->data % 10);
       head->data = head->data / 10;
       }

       printf("|%d| ->",iRev);
       head->data = iRev;
       head = head->next;
    }
    printf("NULL\n");
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
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Reverse(First);

    return 0;
} 