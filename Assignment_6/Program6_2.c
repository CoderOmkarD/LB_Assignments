//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  BoolChkGreater
//  Description:    It is check whether the no. is greater than 100 or not
//  Input:          intger
//  Output:         Bool
//  Author:         Omkar Santosh Durge
//  Date:           30/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if (iNo >100 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number..:");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if (bRet == true)
    {
        printf("Greater...");
    }
    else
    {
        printf("Smaller..");
    }

    return 0;
}