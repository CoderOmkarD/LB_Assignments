//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Sum_Even_Numbers
//  Description:    To Print the Even  Numbers  From 1 to N
//  Input:          Integer
//  Output:
//  Author:         Omkar Santosh Durge
//  Date:           2/11/2025
//
///////////////////////////////////////////////////////////////////////////////
int Sum_Even_Numbers(int limit)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= limit; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

// Time Complexity =O(N/2)
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLimit = 0;

    printf("Enter Number :");
    scanf("%d", &iLimit);

    printf("%d", Sum_Even_Numbers(iLimit));

    return 0;
}