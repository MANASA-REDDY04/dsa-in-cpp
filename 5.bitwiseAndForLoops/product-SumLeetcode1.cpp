#include <iostream>
using namespace std;

/* LEETCODE Q1

    In a given number , print the difference of product of digits and sum of digits.

*/
int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    int temp = n;
    int rem = 0, sum = 0, product = 1;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += rem;
        product *= rem;
        temp /= 10;
    }
    cout << "answer: " << product - sum << endl;
}