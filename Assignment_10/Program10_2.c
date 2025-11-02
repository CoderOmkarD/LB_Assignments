//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  RectArea
//  Description:    To Calculate the area of the Reactangle
//  Input:          float
//  Output:         Double
//  Author:         Omkar Santosh Durge
//  Date:           30/10/2025
//
///////////////////////////////////////////////////////////////////////////////
double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth*fHeight;

    return dArea;
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0;
    float fValue2 = 0;

    double dRet = 0.0;

    printf("Enter The Width..:");
    scanf("%f", &fValue1);

    printf("Enter The Height..:");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of the Circle is %.4lf", dRet);

    return 0;
}