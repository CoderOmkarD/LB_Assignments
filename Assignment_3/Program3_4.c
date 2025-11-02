//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayConvert
//  Description:    It is used to convert the character to small or capital
//  Input:          character
//  Output:         character
//  Author:         Omkar Santosh Durge
//  Date:           27/10/2025
//
///////////////////////////////////////////////////////////////////////////////
void DisplayConvert(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c\n", cValue + 32);
    }
    else if ((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c\n", cValue - 32);
    }
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
