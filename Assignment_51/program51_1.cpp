#include <iostream>

using namespace std;

template<class T>
void Display(T Value, int iSize)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt < iSize; iCnt++)
    {
        cout << Value << "\t";
    }
    cout<<"\n";
}

int main()
{
    Display<int>(11,5);
    Display<char>('M',5);
    Display<float>(3.087f,5);

    return 0;
}