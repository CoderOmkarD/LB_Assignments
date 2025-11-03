//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountOdd
//  Description:    To count that how many digits in a number are Odd No.
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           2/11/2025
//
///////////////////////////////////////////////////////////////////////////////
int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        // printf("%d\n",iDigit);
        if (iDigit%2==1)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;
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

    iRet = CountOdd(iValue);

    printf("The Count of Odd Digits :%d", iRet);

    return 0;
}