#include <iostream>
using namespace std;

int getMax(int a[], int n)
{
    int maxi = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
    }
    return maxi;
}
int getMin(int a[], int n)
{
    int mini = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, a[i]);
    }
    return mini;
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

    cout << "Max: " << getMax(a, n) << endl;
    cout << "Min: " << getMin(a, n) << endl;
}
