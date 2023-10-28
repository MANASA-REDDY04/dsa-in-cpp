#include <iostream>
using namespace std;

/*
The compliment of an integer is an integer you get when you flip all the 0 -> 1 and 1 -> 0
in its binary representation

    For Example:  n = 5 -> 101 (after fliping) -> 010 = 2

    Given an integer x, return its compliment.
*/
int bitwiseCompliment(int n)
{
    int m = n;
    int mask = 0;

    // edge case
    if (n == 0)
        return 1;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int ans = bitwiseCompliment(n);
    cout << "ans: " << ans;
}