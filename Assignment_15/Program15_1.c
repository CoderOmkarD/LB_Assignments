//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountEven
//  Description:    To count that how many digits in a number are Even No.
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           2/11/2025
//
///////////////////////////////////////////////////////////////////////////////
int CountEven(int iNo)
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
        if (iDigit%2==0 || iDigit==0)
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

    iRet = CountEven(iValue);

    printf("The Count of Even Digits :%d", iRet);

    return 0;
}