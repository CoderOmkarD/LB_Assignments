#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Check(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCountOfEven = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt]) == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    ;
}

int main()
{
    int iLenght = 0;
    int *ptr = NULL;
    int iCnt = 0;
    bool bRet = false;

    printf("Enter the size of array\n");
    scanf("%d", &iLenght);

    ptr = (int *)malloc(iLenght * sizeof(int));

    if (NULL == ptr)
    {
        printf("Enable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d Element\n", iLenght);

    for (iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    bRet = Check(ptr, iLenght);

    if (bRet == true)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(ptr);

    return 0;
}