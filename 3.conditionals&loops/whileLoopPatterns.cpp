#include<iostream>
using namespace std;

int main()
{
    //1. m*n print (*)
    //int row,col,i,j;
    // cout<<"Enter rows: ";
    // cin>>row;
    // cout<<"Enter col's: ";
    // cin>>col;
    // i=0;
    // while(i<row) {
    //     j=0;
    //     while(j<col){
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    /*
        2.  1 1 1
            2 2 2
            3 3 3
    */

     int n;
     cout<<"Enter n: ";
     cin>>n;

    int i=1,j;
    while(i<=n)
    {
        j=1;
        while(j<=n){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}