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

bool CheckSorted(PNODE first)
{
    while (first->next != NULL)
    {
        if (first->data > first->next->data)
        {
            return false;
        }
        else
        {
            return true;
        }
        first = first->next;
    }
}

int main()
{

    PNODE head = NULL;
    bool bRet = false;

    InsertFirst(&head, 72);
    InsertFirst(&head, 61);
    InsertFirst(&head, 50);
    InsertFirst(&head, 41);
    InsertFirst(&head, 30);
    InsertFirst(&head, 21);
    InsertFirst(&head, 10);
    printf("Before:\n");
    Display(head);

    bRet = CheckSorted(head);
    if (bRet == true)
    {
        printf("It is Sorted");
    }
    else
    {
        printf("It is Not Sorted");
    }

    return 0;
}