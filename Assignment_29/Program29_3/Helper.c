#include "Omkar.h"

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char Ch = '\0';
    for (i = 1; i <= iRow; i++)
    {
        Ch = 'a';
        for (j = 1; j <= iCol; j++)
        {
            if (i % 2 == 0)
            {

                printf("%d\t", j);
            }

            else
            {
                printf("%c\t", Ch);

                Ch++;
            }
        }
        printf("\n");
    }
}