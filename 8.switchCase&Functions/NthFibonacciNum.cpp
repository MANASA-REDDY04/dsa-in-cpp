#include<iostream>
using namespace std;

int fibo(int n){
    int n1 = 0, n2 = 1,n3=0;
    if(n == 1)
    return 0;
    if(n == 2)
    return 1;
    for(int i=3;i<=n;i++){
         n3 = n1+n2;
         n1 = n2;
         n2 = n3;
    }
    return n3;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"ans: "<<fibo(n)<<endl;
}