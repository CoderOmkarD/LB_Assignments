#include "Marvellous.h"
void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 5 == 0 && Arr[iCnt] % 3 == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}