#include "Omkar.h"

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    

    for (i = 1; i <= iRow; i++)
    {   
         if(iRow != iCol)
        {
            printf("Invalid Input\n");
            printf("The Value of Rows and Colunms Must be same :");
            return;

        }

        for (j = iCol; j >= 1; j--)
        {
            if (i <= j)
            {

                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}