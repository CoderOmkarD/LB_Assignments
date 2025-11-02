//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  FindMax
//  Description:    It is used to check the Maximum between Two Numbers
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int FindMax(int a, int b)
{

    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;

    printf("Enter two Number..:\n");
    scanf("%d %d", &num1, &num2);

    result = FindMax(num1, num2);

    printf("The Maximum number is %d", result);

    return 0;
}