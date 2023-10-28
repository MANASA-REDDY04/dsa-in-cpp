#include<iostream>
#include<math.h>
using namespace std;
/*
binary to decimal -> use %10
decimal to binary -> use n&1;
*/
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    float ans = 0;
    int rem = 0,i=0;
    while(n!=0){
        rem = n %10;
        if(rem!=0)
         ans += pow(2,i);
        i++;
        n /=10;
    }
    cout<<ans<<endl;
}