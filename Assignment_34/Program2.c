/* Write a program which search last occurence of particular element from singly linear linked list.
Function should return position at which element is found.

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|

Input element : 30

Output : 6
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

int SearchLastOccurence(PNODE head, int no)
{
    int iPos = 1;
    int iLastPos = -1;

    while(head != NULL)
    {
        if(head->data == no)
        {
            iLastPos = iPos;
        }
        iPos++;
        head = head -> next;
    }
    return iLastPos;
}

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d | -> ", head->data);
        head = head -> next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;
    int iElement = 0;
    int iRet = 0;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);

    printf("Enter the element : \n");
    scanf("%d",&iElement);

    iRet = SearchLastOccurence(First,iElement);

    if(iRet == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Last Occurence of Element is:%d\n",iRet);
    }

    return 0;
} 