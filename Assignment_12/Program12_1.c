//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Print Factors
//  Description:    To print the Factors of a number
//  Input:          Integer
//  Output:
//  Author:         Omkar Santosh Durge
//  Date:           31/10/2025
//
///////////////////////////////////////////////////////////////////////////////
void Print_Factors(int iNo)
{
    int iCnt = 0;
    for (iCnt = 2; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the Value :");
    scanf("%d", &iValue);

    Print_Factors(iValue);
    printf("Note : We are Not Considering 1 & the Number Itself Here..");

    return 0;
}