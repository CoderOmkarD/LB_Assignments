#include <iostream>

using namespace std;

template <class T>

T Max(T No1, T No2, T No3)
{
    T MaxNo;
    if (No1 > No2 && No1 > No3)
    {
        MaxNo = No1;
    }
    else if (No2 > No1 && No2 > No3)
    {
        MaxNo = No2;
    }
    else
    {
        MaxNo = No3;
    }
    return MaxNo;
}

int main()
{
    int iRet = Max(11, 23, 33);
    printf("Maximum is: %d\n", iRet);

    float fRet = Max(24.68f, 98.86f, 78.98f);
    printf("Maximum is: %f\n", fRet);

    return 0;
}