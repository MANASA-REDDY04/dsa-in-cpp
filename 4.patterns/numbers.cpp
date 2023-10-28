#include<iostream>
using namespace std;

int main()
{
    /*
        1.  1  2  3
            1  2  3
            1  2  3
    */
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i=1,j;
    while(i<=n) {
        j=1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
   /*
        2.  3  2  1
            3  2  1
            3  2  1
        cout<<n-j+1;
   */
   /*
        3. 1  2  3
           4  5  6
           7  8  9
           int val = 1;
        cout<<val++<<" ";
   */
}