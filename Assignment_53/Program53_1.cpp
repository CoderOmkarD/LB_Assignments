#include <iostream>

using namespace std;

template<class T>
void CopyArray(T *src, T *dest, int iSize)
{
    
    int iCnt = 0;
    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }

    cout<<"Destination Array:\n";

}

int main()
{   
    int Arr[]={11,21,51,101,111};
    int Brr[5];

    CopyArray<int>(Arr,Brr,5);

    int i = 0;
    for (i = 0; i < 5; i++)
    {
        cout<<Brr[i]<<"\t";

    }

    return 0;
}