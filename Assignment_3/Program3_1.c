//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name:  PrintEven
//  Description:    It is used to Display the no.of Even numbers based on 
//                  the given input
//  Input:          Integer
//  Output:         Integers
//  Author:         Omkar Santosh Durge
//  Date:           27/10/2025
//
//////////////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    if(iNo<0)
    {
        return;
    }
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo*2;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}