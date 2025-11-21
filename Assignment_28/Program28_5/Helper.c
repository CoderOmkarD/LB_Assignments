#include "Omkar.h"

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCount = 0;

    iCount = 1;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCount);
            iCount++;
        }
        printf("\n");
    }
}