#include<iostream>
using namespace std;

int main(){
    int n,i=1,j;
    cout<<"Enter n : ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        int start = i-1;
        while(start){
            cout<<"* * ";
            start--;
        }
        j--;
        while(j>0){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}