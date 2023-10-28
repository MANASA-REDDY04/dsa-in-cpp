#include<iostream>
using namespace std;

void reverse(int a[],int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}

void printArray(int a[],int n){
    for (int i = 0; i < n; i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int a[20];
    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Original array: "<<endl;
    printArray(a,n);
    reverse(a,n);
    cout << "Reverse array: "<<endl;
    printArray(a,n);

}