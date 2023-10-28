#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any num or alphabet: "<<endl;
    cin >> ch;

    if((int)ch >=65 && (int)ch <=90)
    {
        cout<< "UPPERCASE" <<endl;
    }
    else if((int)ch >=97 && (int)ch <=122)
    {
        cout<<"lowercase"<<endl;
    }
    else{
        cout<<"numeric"<<endl;
    }
}