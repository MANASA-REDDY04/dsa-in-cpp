#include <iostream>
using namespace std;

void altSwap(int a[], int n)
{

    for (int i = 0; i < n - 1; i = i + 2)
    {
        swap(a[i], a[i + 1]);
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
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
    cout << "Before swapping: ";
    printArray(a, n);
    altSwap(a, n);
    cout << "\nAfterSwapping: ";
    printArray(a, n);
}