#include <iostream>
using namespace std;

/*
You are given an array of size N, containing each number between 1-[n-1] atleast once, there is only
single value in an array which is present twice , find the value.

Example:-  N = 5  array elements would be only {1 - 4 & one number repeated}
*/
int getElement(int a[], int n)
{
    int ans = 0;
    // repeated element is eleminated by XOR
    for (int i = 0; i < n; i++)
        ans = ans ^ a[i];
    // exisisting elements are cancelled out , only duplicate left
    for (int j = 1; j < n; j++)
        ans = ans ^ j;

    return ans;
}
int main()
{
    int a[10];
    int n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "ans: " << getElement(a, n) << endl;
}