/* Write a program which display product of all digits of all elements from singly linear linked list.(Dont consider 0)

Input linked list : |11|->|20|->|32|->|41|

Output : 1  2  6  4
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

void DisplayProduct(PNODE head)
{
    int iDigit = 0;
    int iProduct = 1;
    int iNo = 0;

    printf("Product of digits  :\n");

    while(head != NULL)
    {
        iNo = head->data;
        iProduct = 1;
        
        if(iNo == 0)
        {
            printf("1\t");
        }
        else
        {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit != 0)
                {
                    iProduct = iProduct * iDigit;
                }
                iNo = iNo / 10;
            }
            printf("%d\t",iProduct);
        }
        head = head->next;      
    }
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

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);
   
    DisplayProduct(First);

    return 0;
} 