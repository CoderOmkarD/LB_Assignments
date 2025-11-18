
#include <stdio.h>
#include <stdlib.h>
typedef int *IPTR;

void DigitSum(int Arr[], int iSize)

{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
       
        int iSum = 0;
        int iDigit = 0;

        while ((Arr[iCnt]) != 0)
        {
            iDigit = (Arr[iCnt]) % 10;
            iSum = iSum + iDigit;

            (Arr[iCnt]) = (Arr[iCnt]) / 10;
        }
        printf("Sum is %d \n ",iSum);
    }
}

int main()
{
    int iCnt = 0;
    IPTR ptr = NULL;
    int iLength = 0;

    printf("Enter the No. of Elements:\n");
    scanf("%d", &iLength);

    printf("Enter %d elements:\n", iLength);

    ptr = (IPTR)malloc(iLength * sizeof(int));

    if (ptr == NULL)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    DigitSum(ptr, iLength);

    free(ptr);

    return 0;
}
