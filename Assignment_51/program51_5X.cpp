//Direct Reverse
#include <iostream>

using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    T *start=arr;
    T *end=arr+iSize-1;
    T temp;
    int i=0;

    while (start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(i = 0; i < iSize; i++)
    {
        cout << arr[i] << "\t";
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