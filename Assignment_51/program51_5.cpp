//Copying the reverse value to new array 
#include <iostream>

using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int iCnt = 0;
    int NCnt = 0;

    T Brr[iSize];
    for (iCnt =iSize-1,NCnt=0; iCnt <=0 ,NCnt<iSize; iCnt--,NCnt++)
    {
        Brr[NCnt]=arr[iCnt];
    }
    for(int i=0;i<iSize;i++)
    {
        cout<<Brr[i]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 10, 50, 10, 30, 10, 20};
    char Brr[] = {'A', 'S', 'S', 'B', 'K', 'T', 'S', 'F', 'V', 'S','\0'};

    int iRet = 0;

    Reverse<int>(Arr, 10);


    Reverse<char>(Brr, 10);


    return 0;
}