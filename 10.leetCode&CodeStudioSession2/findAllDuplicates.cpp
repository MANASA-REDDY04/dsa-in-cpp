#include<iostream>
#include<algorithm>
using namespace std;

/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] 
and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

(try solve using bitwise)
Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
*/
void getElement(int a[], int n){
    std::sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
        cout<<a[i]<<" ";
        i++;
    }
}
}
int main()
{
    int a[10];
    int n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    getElement(a,n);
}