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
//  Function Name:  ChkDigit
//  Description:    To Check whether the charcter is Digit or not
//  Input:          Character
//  Output:         Int/Bool
//  Author:         Omkar Santosh Durge
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    BOOL bflag = false;

    if ((ch >= '0' && ch <= '9'))
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

    printf("Enter the Charcter to Check:\n");
    scanf("%c", &ch);

    bRet = ChkCapital(ch);

    if (bRet == true)
    {
        printf("It is a Digit\n");
    }
    else
    {
        printf("it is not a Digit\n");
    }

    return 0;
}
/*

Case 1:

Enter the Charcter to Check:
1
It is a Digit

Case 2:
Enter the Charcter to Check:
d
it is not a Digit

Case 3:
Enter the Charcter to Check:
6
It is a Digit

*/
