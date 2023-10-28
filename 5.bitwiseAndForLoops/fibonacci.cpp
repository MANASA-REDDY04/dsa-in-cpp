#include <iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, n3;
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    cout << "Fibonacci series: " << n1 << " " << n2;
    for (int i = 0; i < n; i++)
    {
        n3 = n1 + n2;
        cout << " " << n3;
        n1 = n2;
        n2 = n3;
    }
}