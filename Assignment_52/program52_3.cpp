#include <iostream>

using namespace std;

template <class T>
T AddN(T *arr, int iSize)
{
    int i;

    T iSum = 0;

    for (i = 0; i < iSize; i++)
    {
        iSum = iSum + arr[i];
    }
    return iSum;
}

int main()
{

    int Arr[] = {1, 2, 3, 4, 5, 3, 4};
    float frr[] = {12.45f, 23.45f, 3.323f, 43.55f, 52.2f, 3.42f, 43.42f};

    int iRet=AddN(Arr,7);
    float fRet=AddN(frr,7);

    printf("%d\n",iRet);
    printf("%lf\n",fRet);

    return 0;
}