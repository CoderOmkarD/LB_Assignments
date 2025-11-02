//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Multiply
//  Description:    Print the Multiplication of three number
//  Input:          integer
//  Output:         integer
//  Author:         Omkar Santosh Durge
//  Date:           30/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;
    if (iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
    {
        printf("Enter a Non Zero Number...\n");
    }
    iAns = iNo1 * iNo2 * iNo3;

    return iAns;
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter the three  Number..:");
    scanf("%d%d%d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("The Multiplication is %d", iRet);

    return 0;
}