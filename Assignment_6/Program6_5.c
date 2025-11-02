//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Percentage
//  Description:    To calculate the Percentage
//  Input:          intger
//  Output:         float
//  Author:         Omkar Santosh Durge
//  Date:           30/10/2025
//
///////////////////////////////////////////////////////////////////////////////
float Percentage(int iNo1, int iNo2)
{
    float iPercent = 0.0;
    if (iNo1 == 0)
    {
        printf("The Total Marks should not be zero");
    }
    iPercent = ((float)iNo2 / iNo1) * 100;      //Typecasting
    return iPercent;
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0;

    printf("Enter the Total Marks..:");
    scanf("%d", &iValue1);

    printf("Enter the Obtained Marks..:");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("%.2f %%", fRet);
    return 0;
}