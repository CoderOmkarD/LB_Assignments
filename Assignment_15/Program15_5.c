//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountDiff
//  Description:    To Count the Diffrence between summation of even and odd digits
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           2/11/2025
//
///////////////////////////////////////////////////////////////////////////////
int CountDiff(int iNo)
{
    int iDigit = 0;
    int iDiff = 0;
    int iSumOfEven = 0;
    int iSumOfOdd = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
        {
            iSumOfEven = iSumOfEven + iDigit;
        }

        else
        {
            iSumOfOdd = iSumOfOdd + iDigit;
        }

        iNo = iNo / 10;
    }
    iDiff = iSumOfEven - iSumOfOdd;
    return iDiff;
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

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("The Diffrence is  :%d", iRet);

    return 0;
}
