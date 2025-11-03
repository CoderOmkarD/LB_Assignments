//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplayEven
//  Description:    To Display the range from starting to ending point
//  Input:          Integer
//  Output:
//  Author:         Omkar Santosh Durge
//  Date:           31/10/2025
//
///////////////////////////////////////////////////////////////////////////////
void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    if (iEnd < iStart)
    {
        printf("Invalid Range");
    }
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
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

    printf("Enter The Starting Point..\n");
    scanf("%d", &iValue1);

    printf("Enter The Ending Point..\n");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}