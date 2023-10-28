#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    
    int i=2;
    while(i <= n)
    {
        if(i%2 == 0)
        sum += i;
        i++;
    }
    cout<<"sum = "<<sum<<endl;
}