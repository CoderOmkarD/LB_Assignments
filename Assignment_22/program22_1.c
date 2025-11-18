#include <stdio.h>
#include <stdlib.h>
int CountEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCountOfEven = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt]) % 2 == 0)
        {
            iCountOfEven++;
        }
    }

    return iCountOfEven;
}

int main()
{
    int iLenght = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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

    iRet = CountEven(ptr, iLenght);

    printf("No.of Even no is %d", iRet);

    free(ptr);

    return 0;
}