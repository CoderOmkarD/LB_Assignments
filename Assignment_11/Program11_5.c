//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplayRev
//  Description:    To Display the range from starting to ending point in Reverse
//  Input:          Integer
//  Output:
//  Author:         Omkar Santosh Durge
//  Date:           31/10/2025
//
///////////////////////////////////////////////////////////////////////////////
void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart<0)
    {
        printf("Invalid Range");
        exit(0);                                //Use for the first time
    }
    for (iCnt = iEnd; iCnt >= iStart; iCnt--)
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}