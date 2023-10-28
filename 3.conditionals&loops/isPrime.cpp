#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i=1,c=0;
    while(i<=n)
    {
        if(n%i==0)
        c++;
        i++;
    }
    //Prime number is divisible by one and itself i.e count = 2.
    if(c==2)
    cout<<"Prime Number"<<endl;
    else
    cout<<"Non-Prime Number"<<endl;
    return 0;
}