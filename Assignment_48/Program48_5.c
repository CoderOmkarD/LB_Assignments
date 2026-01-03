#include <stdio.h>
#include <stdlib.h>

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

void DisplayOddPosition(PNODE first)
{
    int i = 0;
    while (first != NULL)
    {
        i++;
        if (i % 2 != 0)
        {
            printf("|%d|->", first->data);
        }

        first = first->next;
    }
}

int main()
{

    PNODE head = NULL;

    InsertFirst(&head, 72);
    InsertFirst(&head, 61);
    InsertFirst(&head, 50);
    InsertFirst(&head, 41);
    InsertFirst(&head, 30);
    InsertFirst(&head, 21);
    InsertFirst(&head, 10);

    printf("Before\n");
    Display(head);

    printf("After\n");

    DisplayOddPosition(head);

    return 0;
}
