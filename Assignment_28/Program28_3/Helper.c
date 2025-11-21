#include "Omkar.h"

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    char Ch = 'A';
    for (i = 1; i <= iRow; i++)
    {
        
        for (j = 1; j <= iCol; j++)
        {
            printf("%c\t", Ch);
            
        }
        Ch++;
        
        printf("\n");
        
    }
}