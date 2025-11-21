#include "Omkar.h"

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for (i = 1; i <= iRow; i++)
    {
        if (i % 2 == 1)
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
            }
        }
        else
        {
            for (j = -1; j >= -iCol; j--)
            {
                printf("%d\t", j);
            }
        }

        printf("\n");
    }
}
