//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  FactorialDiff
//  Description:    To print the Factorial Diffrence between odd and Even Factors
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           30/10/2025
//
///////////////////////////////////////////////////////////////////////////////
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iOddfact = 1;
    int iEvenfact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iOddfact = iOddfact * iCnt;
    }
    for (iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iEvenfact = iEvenfact * iCnt;
    }

    return iEvenfact - iOddfact;
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Value :");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Even Factorial Diffrence is %d", iRet);
    return 0;
}