//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  MultDigits
//  Description:    To return the multiplication of digits
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           2/11/2025
//
///////////////////////////////////////////////////////////////////////////////
int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit==0)
        {
            iDigit=1;
        }

        iMult=iMult*iDigit;

        iNo = iNo / 10;
    }
    return iMult;
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("The Multiplication is  :%d", iRet);

    return 0;
}
//Note Here We Treat the Zero as One