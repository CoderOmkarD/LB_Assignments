#include <iostream>

using namespace std;

template <class T>
int SearchFirst(T *arr, int iSize, T Value)
{
    int iCnt = 0;
    int iCount = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == Value)
        {
            iCount = iCnt + 1;
            return iCount;
        }
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 10, 50, 10, 30, 10, 20};
    char Brr[] = {'A', 'S', 'S', 'B', 'K', 'T', 'S', 'F', 'V', 'S','\0'};

    int iRet = 0;

    iRet = SearchFirst<int>(Arr, 10, 50);
    cout << "First Appearance at : " << iRet << "\n";

    iRet = SearchFirst<char>(Brr, 10, 'V');
    cout << "First Appearance at : " << iRet << "\n";

    return 0;
}