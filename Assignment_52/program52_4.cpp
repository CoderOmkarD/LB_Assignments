#include <iostream>

using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
    int i=0;

    T MaxValue = arr[i];

    for (i = 0; i < iSize; i++)
    {
        if (MaxValue < arr[i])
        {
            MaxValue=arr[i];
        }
        
    }
    return MaxValue;
}

int main()
{

    int Arr[] = {1, 2, 3, 4, 5, 3, 4};
    float frr[] = {12.45f, 23.45f, 3.323f, 43.55f, 52.2f, 3.42f, 43.42f};

    int iRet=Max(Arr,7);
    float fRet=Max(frr,7);

    printf("Maximum Value is : %d\n",iRet);
    printf("Maximum Value is : %f\n",fRet);

    return 0;
}