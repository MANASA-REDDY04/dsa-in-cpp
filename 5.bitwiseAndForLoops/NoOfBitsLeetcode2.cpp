#include <iostream>
using namespace std;

/*
    LEETCODE Q2

    Write a program that takes an unsigned int as an input and prints number of bits it has in its binary form.
    (also known as Hamming code)
*/
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int count = 0;
    while (n != 0)
    {

        // using bitwise & (returns true only if last bit is 1)
        if (n & 1)
            count++;

        // right shifting n by 1 to remove last digit
        n = n >> 1;
    }
    cout << "Number of one's: " << count << endl;
    return 0;
}