#include<iostream>
using namespace std;

int main(){
    /* 1.
    for(int i=0;i<=5;i++){
        cout<<i<<" ";
        i++;
    }
   */
  /* 2.
    for(int i=0;i<=5;i--){
        cout<<i<<" ";
        i++;
    }

    */
   //3.
//    for(int i=0;i<=15;i+=2){
//     cout<<i<<" ";
//     if(i&1){
//         continue;
//     }
//     i++;
//    }
for(int i=0;i<5;i++){
    for(int j=i;j<=5;j++){
        if(i+j==10)
        break;
        cout<<i<<" "<<j<<endl;
    }
}
}