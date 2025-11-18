#include <stdio.h>
#include <stdlib.h>
typedef int *IPTR;

void Digits(int Arr[], int iSize)

{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        int temp = Arr[iCnt];
        int iCount = 0;

        if (temp < 0)
        {
            temp = -temp;
        }

        if (temp == 0)
        {
            iCount = 1;
        }
        else
        {

            while (temp != 0)
            {
                iCount++;
                temp = temp / 10;
            }
        }

        if (iCount == 3)
        {
            printf("%d\t", Arr[iCnt]);
        }
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

    Digits(ptr, iLength);

    free(ptr);

    return 0;
}
