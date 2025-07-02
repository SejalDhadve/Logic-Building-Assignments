/* Write a program which returns addition of all elements from singly linear linked list.

Input linked list : |10|->|20|->|30|->|40|

Output : 100
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

int Addition(PNODE head)
{
   int iSum = 0;

    while(head != NULL)
    {
        iSum = iSum + head->data;
        head = head->next;
    }
    return iSum;
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
    int iRet = 0;

    InsertFirst(&First,10);
    InsertFirst(&First,20);
    InsertFirst(&First,30);
    InsertFirst(&First,40);

    Display(First);

    iRet = Addition(First);

    printf("Addition of Elements is:%d\n",iRet);
    
    return 0;
} 