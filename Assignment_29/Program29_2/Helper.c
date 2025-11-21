#include "Omkar.h"

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iEven = 0;
    int iOdd = 0;

    for (i = 1; i <= iRow; i++)
    {
        iEven = 2;
        iOdd = 1;
        for (j = 1; j <= iCol; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d\t", iOdd);
                iOdd = iOdd + 2;
            }
            else
            {

                printf("%d\t", iEven);
                iEven = iEven + 2;
            }
        }
        printf("\n");
    }
}