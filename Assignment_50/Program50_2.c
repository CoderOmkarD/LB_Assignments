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

int Average(PNODE first)
{
    int iSum = 0;
    int Avg = 0;
    while (first != NULL)
    {
        iSum = iSum + first->data;

        first = first->next;
    }

    Avg = iSum / iCount;
    return Avg;
}
void DisplayGreaterThanAvg(PNODE first)
{
    int  iRet = Average(first);
    PNODE temp = first;  
    printf("Average is :%d\n",iRet);

    while(temp != NULL)
    {   
        if(temp->data > iRet)
        {
            printf("| %d |->", temp->data);
        }
        temp = temp->next;
    }
}
int main()
{

    PNODE head = NULL;

    InsertFirst(&head, 72);
    InsertFirst(&head, 61);
    InsertFirst(&head, 50);
    InsertFirst(&head, 41);
    InsertFirst(&head, -30);
    InsertFirst(&head, -21);
    InsertFirst(&head, -10);
    printf("Before:\n");
    Display(head);

    printf("After:\n");
    DisplayGreaterThanAvg(head);

    return 0;
}