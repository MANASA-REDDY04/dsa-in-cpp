#include <iostream>
using namespace std;

// Given a = 3 -> 11 , b = 2 -> 10 , total bits 11 , 10 = 3

int bits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    cout << "ans: " << bits(a) + bits(b) << endl;
}