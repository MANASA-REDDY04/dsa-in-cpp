#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
   // n = 5;
    int bit, i=0;
    float ans=0;
    /*
        101 --> pass 1: n&1 = 1 -> 10^0 * 1 + ans = 1 + 0 = 1
        10  --> pass 2: n&1 = 0 -> 10^1 * 0 + ans = 0 + 1 = 1 (we need to get 01)
        1   --> pass 3: n&1 = 1 -> 10^2 * 1 + ans = 100 + 1 = 101
    */
    while(n!=0){
        bit = n&1;
        ans += (bit * pow(10,i));
        n = n>>1;
        i++;
    }
    cout<<"Binary: "<<ans<<endl;
}