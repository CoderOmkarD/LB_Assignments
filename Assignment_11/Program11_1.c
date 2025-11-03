//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplay
//  Description:    To Display the range from starting to ending point
//  Input:          Integer
//  Output:
//  Author:         Omkar Santosh Durge
//  Date:           31/10/2025
//
///////////////////////////////////////////////////////////////////////////////
void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iEnd<iStart)
    {
        printf("Invalid Range");
    }
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}
//Time Complexity =
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}