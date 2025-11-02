//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    To print the number in word
//  Input:          intger
//  Output:
//  Author:         Omkar Santosh Durge
//  Date:           30/10/2025
//
///////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    switch (iNo)
    {
    case 0:
        printf("Zero..");
        break;

    case 1:
        printf("One..");
        break;

    case 2:
        printf("Two..");
        break;

    case 3:
        printf("Three..");
        break;

    case 4:
        printf("Four..");
        break;

    case 5:
        printf("Five..");
        break;

    case 6:
        printf("Six..");
        break;

    case 7:
        printf("Seven..");
        break;

    case 8:
        printf("Eight..");
        break;

    case 9:
        printf("Nine..");
        break;

    default:
        printf("Invalid Number");
        break;
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

    printf("Enter the Value :");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}