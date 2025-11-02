//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  FactDiff
//  Description:    It is used to find the difference between the summation of factors
//                  and summation of non factors
//  Input:          Integer
//  Output:         Integer
//  Author:         Omkar Santosh Durge
//  Date:           27/10/2025
//
///////////////////////////////////////////////////////////////////////////////
int FactDiff(int iNo)
{   
    int i = 0;
    int iSumOfFact=0;
    int iSumOfNonFact=0;
    int iFactDiff=0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo; i++)
    {
        if (iNo % i != 0)
        {
          
            iSumOfNonFact=iSumOfNonFact+i;
        }   
    }
    
    for (i = 1; i <= iNo/2; i++)
    {
        if (iNo % i == 0)
        {
          
            iSumOfFact=iSumOfFact+i;
        }

        
    }

    iFactDiff=iSumOfFact-iSumOfNonFact;
    return iFactDiff;
    
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

    iRet=FactDiff(iValue);

    printf("The Diffrence is : %d",iRet);

    return 0;
}