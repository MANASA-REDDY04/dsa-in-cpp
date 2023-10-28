#include <iostream>
using namespace std;

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    bool count = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count = 0;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Non Prime";
    }
    else
    {
        cout << "Prime";
    }
}