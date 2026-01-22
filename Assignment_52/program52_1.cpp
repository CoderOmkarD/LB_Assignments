#include <iostream>

using namespace std;

template <class T>
T Multiply(T iNo1, T iNo2)
{
    T ans = 0;
    ans = iNo1 * iNo2;
    return ans;
}
int main()
{
    int iRet = Multiply<int>(10, 20);
    printf("%d\n", iRet);

    float fRet = Multiply<float>(11.55f, 78.87f);

    printf("%f\n", fRet);

    return 0;
}