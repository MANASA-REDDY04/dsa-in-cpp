#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            cin>>a[i][j];
        }
        int rs=0,cs=0,re=n-1,ce=n-1;
        while(rs<=re && cs<=ce){
            for(int i=cs;i<=ce;i++)
            cout<<a[rs][i]<<" ";

            rs++;
            for(int i=rs;i<=re;i++)
            cout<<a[i][ce]<<" ";

            ce--;
            if(rs<=re){
                for(int i=ce;i>=cs;i--)
                cout<<a[re][i]<<" ";
                re--;
            }
            if(cs<=ce){
                for(int i=re;i>=rs;i--)
                cout<<a[i][cs]<<" ";
                cs++;
            }
        }
        cout<<endl;
    }
    return 0;
}