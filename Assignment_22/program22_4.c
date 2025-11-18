#include <stdio.h>
#include <stdlib.h>
int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCountOfEven = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt]) == 11)
        {
            return  iCnt+1;
        }
       
    }
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

    iRet = Frequency(ptr, iLenght);

    printf("Frequency is :%d", iRet);

    free(ptr);

    return 0;
}