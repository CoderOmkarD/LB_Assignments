//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  MultFact
//  Description:    It is used to find the multiplication of the factors of the
//                  given number
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           27/10/2025
//
///////////////////////////////////////////////////////////////////////////////
int MultFact(int iNo)
{   

    int iMult=1;
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo / 2; i++)
    {
        if (iNo % i == 0)
        {
          
            iMult=iMult*i;
        }

        
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
    int iRet=0;
    printf("Enter the Number..\n");
    scanf("%d", &iValue);

    iRet=MultFact(iValue);

    printf("The Multiplication of the factors is : %d",iRet);

    return 0;
}