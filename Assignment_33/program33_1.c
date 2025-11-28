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
//  Function Name:  ChkAlpha
//  Description:    To Check whether the charcter is alpabet of not
//  Input:          Character
//  Output:         Int/Bool
//  Author:         Omkar Santosh Durge
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{
    BOOL bflag = false;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    bRet = ChkAlpha(ch);

    if (bRet == true)
    {
        printf("It is a Character\n");
    }
    else
    {
        printf("it is not a character\n");
    }

    return 0;
}
/*

Case 1:
Enter the Charcter to Check
1
it is not a character

Case 2:
Enter the Charcter to Check
q
It is a Character

Case 3:
Enter the Charcter to Check
A
It is a Character


*/
