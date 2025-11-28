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
//  Function Name:  ChkCapital
//  Description:    To Check whether the charcter is Capital alpabet or not
//  Input:          Character
//  Output:         Int/Bool
//  Author:         Omkar Santosh Durge
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    BOOL bflag = false;

    if ((ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkCapital(ch);

    if (bRet == true)
    {
        printf("It is a Capital Character\n");
    }
    else
    {
        printf("it is not a Capital character\n");
    }

    return 0;
}
/*

Case 1:

Enter the Charcter to Check
a
it is not a Capital character

Case 2:
Enter the Charcter to Check
A
It is a Capital Character

Case 3:
Enter the Charcter to Check
Z
It is a Capital Character


*/
