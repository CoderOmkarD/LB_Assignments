//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeSum
//  Description:    To Display sum of the range
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           31/10/2025
//
///////////////////////////////////////////////////////////////////////////////
int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if (iStart <= 0 || iEnd < iStart)
    {
        printf("Invalid Range");
        return 0;
    }
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
// Time Complexity
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter The Starting Point..\n");
    scanf("%d", &iValue1);

    printf("Enter The Ending Point..\n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if (iRet == 0)
    {
        return 0;
    }
    printf("Addition is :%d", iRet);

    return 0;
}