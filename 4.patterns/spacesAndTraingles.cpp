#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i=1,j;

    /*
        1.       *
               * *
             * * *
           * * * *
    */
//    while(i<=n){
//     j=1;
//     while(j<=n-i){
//         cout<<"  ";
//         j++;
//     }
//     while(j<=n){
//         cout<<"* ";
//         j++;
//     }
//     cout<<endl;
//     i++;
//    }

    /*
        2. * * * *
           * * *
           * *
           * 
    */
//    while(i<=n){
//     j=1;
//     while(j<=(n-i+1)){
//         cout<<"* ";
//         j++;
//     }
//     cout<<endl;
//     i++;
//    }

   /*
       3.  *  *  *  *
              *  *  *
                 *  *
                    * 
   */
    while(i<=n){
        j=1;
        while(j<=i-1){
            cout<<" ";
            j++;
        }
        while(j<=n){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
  /*
        * * * *
         * * *
          * *
           *
        same as above code instead print one space @line 55
  */


 /*
        4.      1
             1  2  1
         1   2  3  2  1
 */
        // int val;
        // while(i<=n){
        //     int space = n-i;
        //     while(space){
        //         cout<<"  ";
        //         space--;
        //     }
        //     j=1;
        //     while(j<=i){
        //         cout<<j++<<" ";
        //     }
        //     int start = i-1;
        //     while(start){
        //         cout<<start--<<" ";
        //     }
        //     cout<<endl;
        //     i++;
        // }
}