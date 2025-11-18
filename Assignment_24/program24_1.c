#include <stdio.h>
#include <stdlib.h>
typedef int *IPTR;

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
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


    if(ptr==NULL)
    {
        printf("Enable to allocate the memory \n");
        return -1;
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Maximum(ptr, iLength);

    printf("The Maximum Number is %d\n", iRet);

    free(ptr);

    return 0;
}