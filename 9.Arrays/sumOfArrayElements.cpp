#include <iostream>
using namespace std;

int getSum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int a[20];
    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Sum: " << getSum(a, n) << endl;
}