#include <iostream>
using namespace std;

int getUnique(int a[], int n)
{
    int ans = 0;
    /*^ -> XOR operation
        repeated numbers will get cancelled in XOR operation
        1 ^ 1 = 0 , 5 ^ 5 = 0 , at last only unique number remains in answer during the peroccess.
    */
    for (int i = 0; i < n; i++)
    {
        ans ^= a[i];
    }
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
    cout << "ans: " << getUnique(a, n) << endl;
}