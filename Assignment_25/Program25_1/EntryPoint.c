#include "Marvellous.h"

int main()

{
    int iLength = 0;
    IPTR ptr = NULL;

    int iRet = 0;
    int iCnt = 0;

    printf("Enter the no.of Elements:\n");
    scanf("%d", &iLength);

    ptr = (IPTR) malloc(iLength * sizeof(int));

    if (ptr == NULL)
    {
        printf("Enable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements :\n", iLength);

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Diffrence(ptr, iLength);

    printf("The Diffrence is: %d", iRet);

    free(ptr);
}