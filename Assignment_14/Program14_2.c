//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkZero
//  Description:    To check that there is 0 present in a number or not
//  Input:          Integer
//  Output:         BOOL
//  Author:         Omkar Santosh Durge
//  Date:           2/11/2025
//
///////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if (iNo == 0)
    {
        printf("The Number is Zero\n");
        
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {
            return 1;
        }

        iNo = iNo / 10;
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number :");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It Contains Zero.");
    }
    else
    {
        printf("There is no zero.");
    }

    return 0;
}