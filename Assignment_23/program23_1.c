#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bflag = false;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (iNo == Arr[iCnt])
        {
            bflag = true;
            break;
        }
    }

    return bflag;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the no. of element\n");
    scanf("%d", &iLength);

    printf("Enter the number to check\n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (NULL == ptr)
    {
        printf("Unable to allocate the memory\n");
    }

    printf("Enter the element:\n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    bRet = Check(ptr, iLength, iValue);

    if (bRet == true)
    {
        printf("%d is present .\n", iValue);
    }
    else
    {
        printf("%d is absent .\n", iValue);
    }

    return 0;
}
