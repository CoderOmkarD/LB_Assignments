#include "Omkar.h"

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for (i = 1; i <= iRow; i++)
    {
        ch = 'A';
        for (j = 1; j <= iCol; j++)
        {
            if (i % 2 == 1)
            {
                printf("%c\t", ch);
                ch++;
            }
            else
            {
                printf("%c\t", ch + 32);
                ch++;
            }
        }
        printf("\n");
    }
}