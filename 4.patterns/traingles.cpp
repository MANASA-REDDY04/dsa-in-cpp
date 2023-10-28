#include<iostream>
using namespace std;

int main()
{
    /*
        1.  *
            * *
            * * *
    */
   int n;
   cout<<"Enter n: ";
   cin>>n;
//    int i=1,j;
//    while(i<=n){
//      j = 1;
//      while(j<=i){
//         cout<<"* ";
//         j++;
//      }
//      cout<<endl;
//      i++;
//    }
   /*
        2. 1
           2  2
           3  3  3
           cout<<i<<" "; 
   */
  /*
    3.  1
        2 3
        4 5 6
        7 8 9 10
        count=1;
        cout<<count++<<" ";
  */
 /*
    4.  1
        2  3
        3  4  5
        4  5  6  7
 */
    int i=1,j,count=1;
    while(i<=n){
        j=1;
        count = i;
        while(j<=i){
            cout<<count++<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    // without using count: cout<<i+j-1;

    /*
    5.  1
        2  1
        3  2  1
        4  3  2  1
        cout<<count--<<" ";
        without using count :- i-j+1;
   */
}