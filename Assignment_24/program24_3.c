#include <stdio.h>
#include <stdlib.h>
typedef int *IPTR;

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];
    int Diff = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        else if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    Diff = iMax - iMin;

    return Diff;
}

int main()
{
    int iCnt = 0;
    IPTR ptr = NULL;
    int iLength = 0;
    int iRet = 0;

    printf("Enter the No. of Elements:\n");
    scanf("%d", &iLength);

    printf("Enter %d elements:\n", iLength);

    ptr = (IPTR)malloc(iLength * sizeof(int));

    if (ptr == NULL)
    {
        printf("Enable to allocate the memory \n");
        return -1;
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Minimum(ptr, iLength);

    printf("The Difference between largest and smallest number is  %d\n", iRet);

    free(ptr);

    return 0;
}