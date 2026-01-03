#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int iCount = 0;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
    iCount++;
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int CountTwoDigit(PNODE first)
{
    int iCountOfValue = 0;
    while (first != NULL)
    {
        int iCount = 0;
        int iNo = first->data;
        while (iNo != 0)
        {
            iCount++;

            iNo = iNo / 10;
        }

        if (iCount >= 2)
        {
            iCountOfValue++;
        }

        first = first->next;
    }
    return iCountOfValue;
}

int main()
{

    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 72);
    InsertFirst(&head, 61);
    InsertFirst(&head, 2);
    InsertFirst(&head, 431);
    InsertFirst(&head, 303);
    InsertFirst(&head, 2);
    InsertFirst(&head, 10);

    Display(head);

    iRet = CountTwoDigit(head);
    printf("%d", iRet);

    return 0;
}