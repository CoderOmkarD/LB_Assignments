//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  FactDiff
//  Description:    It is used to find the summation of non factors
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           27/10/2025
//
///////////////////////////////////////////////////////////////////////////////
int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo; i++)
    {
        if (iNo % i != 0)
        {

            iSum = iSum + i;
        }
    }

    return iSum;
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
    printf("Enter the Number..\n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("The Summation of the Non factors is : %d", iRet);

    return 0;
}