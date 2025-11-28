//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

#define true 1
#define false 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkSmall
//  Description:    To Check whether the charcter is Small alpabet or not
//  Input:          Character
//  Output:         Int/Bool
//  Author:         Omkar Santosh Durge
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
    BOOL bflag = false;

    if ((ch >= 'a' && ch <= 'z'))
    {
        bflag = true;
    }
    return bflag;
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{

    char ch = '\0';
    BOOL bRet = false;

    printf("Enter the Charcter to Check\n");
    scanf("%c", &ch);

    bRet = ChkSmall(ch);

    if (bRet == true)
    {
        printf("It is a Small Character\n");
    }
    else
    {
        printf("it is not a Small character\n");
    }

    return 0;
}
/*

Case 1:

Enter the Charcter to Check
a
It is a Small Character

Case 2:

Enter the Charcter to Check
z
It is a Small Character

Case 3:

Enter the Charcter to Check
A
it is not a Small character


*/
