#include <iostream>

using namespace std;

template <class T>
int SearchLast(T *arr, int iSize, T Value)
{
    int iCnt = 0;
    int iCount = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == Value)
        {
            iCount = iCnt;
        }
    }
    return iCount + 1;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 10, 50, 10, 30, 10, 20};
    char Brr[] = {'A', 'S', 'S', 'B', 'K', 'T', 'S', 'F', 'V', 'S','\0'};

    int iRet = 0;

    iRet = SearchLast<int>(Arr, 10, 50);
    cout << "Last Appearance at : " << iRet << "\n";

    iRet = SearchLast<char>(Brr, 10, 'V');
    cout << "Last Appearance at : " << iRet << "\n";

    return 0;
}