#include<iostream>
using namespace std;
// finding frequency of target element
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target,frequency;
    cout<<"Enter the target element: ";
    cin>>target;
    frequency= 0;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            frequency++;
        }
    }
    cout<<"The frequency of "<<target<<" element in the array is: "<<frequency;
    return 0;
}
