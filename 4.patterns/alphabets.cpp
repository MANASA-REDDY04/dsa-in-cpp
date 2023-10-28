#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    /*
        1.  A A A
            B B B
            C C C
    */
    int i=1,j;
    // char ch='A';
    // while(i<=n){
    //     j=1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     ch++;
    //     i++;
    // }
    //without using ch: (char)('A'+i-1)

    /*
        2.  A B C
            A B C
            A B C
            j=1,ch='A';
            cout<<ch++<<" ";
            without using ch: (char)('A'+j-1)
    */
   /*
        3.  A B C
            D E F
            G H I
            cout<<ch++<<" ";
    */
   /*
        4. A B C 
           B C D
           C D E
   */
    //   char ch='A';
    //   while(i<=n){
    //     j=1;
    //     while(j<=n){
    //         cout<<ch++<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     ch='A'+i;
    //     i++;
    //   }
      //without using ch: ((char)('A'+i+j-2))

    /*
        5. A
           B  B
           C  C  C
    */
//    while(i<=n){
//     j=1;
//     while(j<=i){
//         cout<<(char)('A'+i-1)<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
//    }

/*
    6.  A
        B  C
        C  D  E
        D  E  F  G
*/
    // while(i<=n){
    //     j=1;
    //     while(j<=i){
    //         cout<<(char)('A'+i+j-2)<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

/*
    7.   D
         C  D
         B  C  D
         A  B  C  D
*/
      char ch;
      while(i<=n){
        j=1;
        ch = 'A'+n-i;
        while(j<=i){
           cout<<ch++<<" ";
           j++;
        } 
        cout<<endl;
        i++;
      }
}
