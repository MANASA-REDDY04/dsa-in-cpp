#include<iostream>
using namespace std;

//Check weather the given number is power of 2 or not.

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    if(n<=0){
        cout<<"false"<<endl;
    }
    else{
      int ans = n & (n-1);
      if(ans == 0)
      cout<<"true"<<endl;
      else
      cout<<"false"<<endl;
    }
}