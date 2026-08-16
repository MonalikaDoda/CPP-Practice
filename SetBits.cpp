#include <iostream>
using namespace std;

int countSetBits(int a, int b)
{
    int setBits = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            setBits++;
        }
        a = a >> 1;
    }

    while (b != 0)
    {
        if (b & 1)
        {
            setBits++;
        }
        b = b >> 1;
    }

    return setBits;
}

int main()
{
    cout << countSetBits(2, 3);
}