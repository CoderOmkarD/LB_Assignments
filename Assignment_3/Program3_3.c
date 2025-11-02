//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayEvenFactor
//  Description:    It is used to Display the Factor only Even
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           27/10/2025
//
///////////////////////////////////////////////////////////////////////////////
void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo / 2; i++)
    {
        if (iNo % i == 0 && i % 2 == 0)
        {
            printf("%d\t  ", i);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter the Number..\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}