#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    float cel;
    int faren=0;
    cout<<"Fahrenheit\tcelsius"<<endl;
    while(faren<=n)
    {
    cout<<"   "<<faren<<"\t\t";
    cel = (faren-32)/1.8000;
     cout<<cel<<endl;
    faren++;
    }
}