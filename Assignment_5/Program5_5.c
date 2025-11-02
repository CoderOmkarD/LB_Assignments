//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  FindLargest
//  Description:    It is used to find the integer
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           29/10/2025
//
///////////////////////////////////////////////////////////////////////////////
int FindLargest(int x, int y, int z)
{

    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int result = 0;

    printf("Enter three number..:\n");
    scanf("%d%d%d", &a, &b, &b);

    result = FindLargest(a, b, c);

    if (result == 0)
    {
        printf("Enter Diffrent Numbers");
        return 0;
    }
    else
    {
        printf("%d is a largest number..", result);
    }

    return 0;
}