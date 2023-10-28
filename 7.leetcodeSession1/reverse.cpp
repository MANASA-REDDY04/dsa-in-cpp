#include <iostream>
using namespace std;
/*
Given a signed 32-bit integer x, return x with its digits reversed. if reversing x causes the
value to go outside the signed 32-bit integer range [-2^31 , 2^31-1], then return 0.
*/
int reverse(int n){
    int rem, ans = 0;
    while (n != 0)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        // ans*10 > INT_MAX -> ans = INT_MAX/10.
        if (ans < INT32_MIN / 10 || ans > INT32_MAX / 10){
        return 0;
        }
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int ans = reverse(n);
    cout << "ans: " << ans << endl;
}