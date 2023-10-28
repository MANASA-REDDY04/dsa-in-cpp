#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[20][20];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int sum=0,c=1;
    while(c<=n){
        int i=0;
        int j=n-c;
        while(j<n){
         //   cout<<i<<" "<<j<<endl;
            sum=sum+a[i][j];
            i++;
            j++;
        }
        cout<<sum<<" ";
        sum=0;
        c++;
    }
    int c1 = 1;
    while(c1<n){
        int i = c1;
        int j=0;
        sum=0;
        while(i<n){
            sum+=a[i][j];
            i++;
            j++;
        }
        cout<<sum<<" ";
        c1++;
    }
}