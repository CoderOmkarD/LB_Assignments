#include "Marvellous.h"
int Diffrence(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDiff = 0;
    int iSumOfEven = 0;
    int iSumOfOdd = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt]) % 2 == 0)
        {
            iSumOfEven = iSumOfEven + Arr[iCnt];
        }
        else if ((Arr[iCnt]) % 2 == 1)
        {
            iSumOfOdd = iSumOfOdd + Arr[iCnt];
        }
    }
    iDiff = iSumOfEven - iSumOfOdd;

    return iDiff;
}