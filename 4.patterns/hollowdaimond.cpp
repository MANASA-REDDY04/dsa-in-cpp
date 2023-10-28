#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c = (n+1)/2;
    for(int i=0;i<c;i++){
    int space = c-i-1;
    while(space--)
    cout<<" ";
    cout<<"*";
    if(i>0){
        int spc = 2*i-1;
        while(spc--)
        cout<<" ";
        cout<<"*";
    }
    cout<<endl;
    }
    n = n-c;
    for(int i=1;i<=n;i++){
        cout<<" ";
        int j=1;
        while(j<=i-1){
            cout<<" ";
            j++;
        }
        // cout<<"*";
        // if(i!=n){
        //     j=2;
        // while(j<=2*n-i){
        //     if(j==2*n-i)
        //     cout<<"*";
        //     else
        //     cout<<"_";
        //     j++;
        // }
     //   }
     for(int j=1;j<=(2*(n-i))+1;j++){
        if(j==1||j==(2*(n-i))+1)
        cout<<"*";
        else
        cout<<" ";
     }
        cout<<endl;
        
    }
}