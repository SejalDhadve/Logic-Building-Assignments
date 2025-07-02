/* Write a program which return second maximum element from singly linear linked list.

Input linked list : |110|->|230|->|320|->|240|
Output : 240
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

int SecMaximum(PNODE Head)
{
    int iMax1 = 0;
    int iMax2 = 0;

    while(Head != NULL)
    {
        if(Head->data > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = Head->data;
        }
        else if((Head->data > iMax2) && (Head->data != iMax1))
        {
            iMax2 = Head->data;
        }
        Head = Head -> next;
    }

    return iMax2;
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

    InsertFirst(&First,110);
    InsertFirst(&First,230);
    InsertFirst(&First,320);
    InsertFirst(&First,240);

    Display(First);

    iRet = SecMaximum(First);

    printf("Second maximum Elements is:%d\n",iRet);

    return 0;
} 