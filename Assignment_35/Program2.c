 /* Write a program which displays all elements which are prime from singly linear linked list.

Input linked list : |11|->|20|->|17|->|41|->|22|->|89|

Output : 11  17  41  89
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

void DisplayPrime(PNODE head)
{
    int i = 0;
    int iPrime = 0;

    printf("Prime Elements are: \n");

    while(head != NULL)
    {
        iPrime = 0;

        for(i = 1; i <= head->data; i++)
        {
            if((head->data % i) == 0)
            {
                iPrime++;
            }
        }
            if(iPrime == 2)
            {
                printf("%d\t",head->data);
            }
            head = head->next;
        }
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
    
    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    DisplayPrime(First);

    return 0;
} 