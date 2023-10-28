#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter cash: ";
    cin >> n;

    switch (100)
    {
    case 100:
        cout << n / 100 << " notes of 100 are required" << endl;
        n = n - (n / 100) * 100;
    case 50:
        cout << n / 50 << " notes of 50 are required" << endl;
        n = n - (n / 50) * 50;
    case 20:
        cout << n / 20 << " notes of 20 are required" << endl;
        n = n - (n / 20) * 20;
    case 1:
        cout << n << " notes of 1 are required" << endl;
        break;
    }
}