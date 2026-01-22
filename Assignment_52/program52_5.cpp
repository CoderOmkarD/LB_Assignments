#include <iostream>

using namespace std;

template <class T>
T Minimum(T *arr, int iSize)
{
    int i=0;

    T MinValue = arr[i];

    for (i = 0; i < iSize; i++)
    {
        if (MinValue > arr[i])
        {
            MinValue=arr[i];
        }
        
    }
    return MinValue;
}

int main()
{

    int Arr[] = {8, 2, 3, 4, 5, 1, 4};
    float frr[] = {12.45f, 23.45f, 3.323f, 43.55f, 52.2f, 3.42f, 43.42f};

    int iRet=Minimum(Arr,7);
    float fRet=Minimum(frr,7);

    printf("Minimum Value is : %d\n",iRet);
    printf("Minimum Value is : %f\n",fRet);

    return 0;
}