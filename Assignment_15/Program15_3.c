//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountRange
//  Description:    To count that how many digits  are in between 3 to 7
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           2/11/2025
//
///////////////////////////////////////////////////////////////////////////////
int CountRange(int iNo)
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
        if (iDigit < 7 && iDigit > 3)
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

    iRet = CountRange(iValue);

    printf("The Count of digits in Between 3 to 7 is :%d", iRet);

    return 0;
}