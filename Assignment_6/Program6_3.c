//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkEqual
//  Description:    It is check whether the no. is equal or not
//  Input:          intger
//  Output:         Bool
//  Author:         Omkar Santosh Durge
//  Date:           30/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1,int iNo2)
{
    if (iNo1==iNo2 )
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
    int iValue1= 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Enter the two  Number..:");
    scanf("%d%d", &iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if (bRet == true)
    {
        printf("Equal...");
    }
    else
    {
        printf("Not Equal..");
    }

    return 0;
}