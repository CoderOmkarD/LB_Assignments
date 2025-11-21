#include "Omkar.h"

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCount = 1;

    for (i = 1; i <= iRow; i++)
    {

        for (j = 1; j <= iCol; j++)
        {
            if (iCount > 9) // Updator
            {
                iCount = 1;
            }
            printf("%d\t", iCount);
            iCount++;
        }
        printf("\n");
    }
}