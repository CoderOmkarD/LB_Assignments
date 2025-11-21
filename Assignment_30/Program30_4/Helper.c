#include "Omkar.h"

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCount = 1;

    for (i = 1; i <= iRow; i++)
    {
        if (iRow != iCol)
        {
            printf("Invalid Input\n");
            printf("The Value of Rows and Colunms Must be same :");
            return;
        }

        for (j = 1; j <= iCol; j++)
        {
            if (i == 1 || j == 1 || i == iRow || j == iCol)
            {

                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
}