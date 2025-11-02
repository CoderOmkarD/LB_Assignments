//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Factorial
//  Description:    To print the factorial of a number
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           30/10/2025
//
///////////////////////////////////////////////////////////////////////////////
int Factorial(int iNo)
{   int iCnt=0;
    int ifact=1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        ifact=ifact*iCnt;
    }

    return ifact;
  
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter the Value :");
    scanf("%d", &iValue);

    iRet=Factorial(iValue);

    printf("Factorial of a number is %d",iRet);
    return 0;
}