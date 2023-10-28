#include<iostream>
using namespace std;

// AP = 3n+7 , i/p ->2 o/p -> 3*2+7 = 13
int ap(int n){
     return 3*n + 7;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"ans: "<<ap(n)<<endl;
}