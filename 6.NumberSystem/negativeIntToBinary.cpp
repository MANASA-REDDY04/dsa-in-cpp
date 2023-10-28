#include<iostream>
#include<math.h>
using namespace std;

int decimalToBinary(int n){
    int i=0;
    float ans = 0;
    while(n!=0){
        int bit = n&1;
        ans = bit * pow(10,i) +ans;
        i++;
        n = n >> 1;
    }
    return ans;
}
int main(){
    int n,i=0;
    cout<<"Enter n: ";
    cin>>n;
    n = n * -1;
    int ans = decimalToBinary(n);
    cout<<ans<<endl;
    int temp = ans;
    int rem; float num = 0;
    int count1 = 0,count2=0;
    while(ans!=0){
        count1++;
        ans = ans /10;
    }
    while(temp != 0){
        rem = temp % 10;
        if(rem == 0)
        rem = 1;
        else
        rem = 0;
        num = rem * pow(10,i) + num;
        i++;
        temp = temp /10;
    }
       int temp2 = num;
       while(temp2 != 0){
        count2++;
        temp2 /= 10;
       }
       int j,count = 0;
       int count3 =0;
       if(count1 != count2){
         count3 = count1-count2;
       }
       count = 32 - count3 -count2;
       while(count){
        cout<<1;
        count--;
       }
       while(count3){
        cout<<0;
        count3--;
       }
       int num1 = num;
       if(num1%10 == 0)
       cout<<num+1<<endl;
       
    
}



