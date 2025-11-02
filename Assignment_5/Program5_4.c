//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CheckNumberType
//  Description:    It is used to check the number is positive,Negative or Zero
//  Input:          Integer
//  Output:
//  Author:         Omkar Santosh Durge
//  Date:           29/10/2025
//
///////////////////////////////////////////////////////////////////////////////
void CheckNumberType(int num)
{
    if (num > 0)
    {
        printf("It is a Positive Number...");
    }
    else if (num == 0)
    {
        printf("It is a Zero...");
    }
    else if (num < 0)
    {

        printf("It is a Negative Number...");
    }
    else
    {
        printf("Enter a Valid Number...");
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int number = 0;

    printf("Enter the number..:\n");
    scanf("%d", &number);

    CheckNumberType(number);

    return 0;
}