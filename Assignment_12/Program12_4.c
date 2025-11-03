//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Sum_Of_Factorsctors
//  Description:    To print the Factors of a number
//  Input:          Integer
//  Output:
//  Author:         Omkar Santosh Durge
//  Date:           31/10/2025
//
///////////////////////////////////////////////////////////////////////////////
int Sum_Of_Even_Factors(int iNo)
{
    int iCnt = 0;
    int SumOfFact = 0;
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0 && iCnt%2==0)
        {
            SumOfFact = SumOfFact + iCnt;
        }
    }
    return SumOfFact ;
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

    printf("%d\n", Sum_Of_Even_Factors(iValue));

    printf("Note : We are Not Considering  the Number Itself as Factor Here..");

    return 0;
}