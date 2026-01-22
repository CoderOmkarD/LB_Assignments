#include <iostream>

using namespace std;

template <class T>
bool CheckSorted(T *Arr, int iSize)
{
    bool bflag = false;
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize-1; iCnt++)
    {
        if (Arr[iCnt] <= Arr[iCnt + 1])
        {
            bflag = true;
        }
        else
        {
            bflag = false;
            return bflag;
        }
    }
    return bflag;
}

int main()
{
    int Arr[] = {11, 21, 11, 101, 111};
    bool bRet = false;
    bRet = CheckSorted<int>(Arr, 5);

    if (bRet==true)
    {
        cout<<"Array is Sorted..\n";
    }
    else
    {
        cout<<"Array is not Sorted...\n";
    }

    return 0;
}