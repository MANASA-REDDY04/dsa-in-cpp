#include <iostream>
using namespace std;

// For given input n,r find value of nCr = n!/(r! * (n-r)!).

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);

    return numerator / denominator;
}

int main()
{
    int n, r;
    cout << "Enter n and r values: ";
    cin >> n >> r;
    int ans = nCr(n, r);
    cout<<"ans: "<<ans<<endl;
}