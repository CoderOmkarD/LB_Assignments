#include <stdio.h>
#include <stdlib.h>
int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCountOfEven = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt]) == iNo)
        {
            return iCnt + 1;
        }
    }
}

int main()
{
    int iLenght = 0;
    int *ptr = NULL;
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the size of array\n");
    scanf("%d", &iLenght);
    
    printf("Enter the Number to check\n");
    scanf("%d", &iValue);

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

    iRet = Frequency(ptr, iLenght, iValue);

    printf("Frequency of %d is :%d", iValue, iRet);

    free(ptr);

    return 0;
}