#include "Omkar.h"

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for (i = 1; i <= iRow; i++)
    {

        for (j = i; j < iCol + i; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}