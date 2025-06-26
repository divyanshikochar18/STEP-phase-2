#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements(sorted manner: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int left,right,mid,key;
    cout<<"Enter the taregt element: ";
    cin >> key;
    left = 0,right = n-1;
    while(left <= right){
        mid = left + (right - left)/2;
        if(arr[mid] == key){
            cout << "Element found at index: "<< mid<<endl;
            return 0;
        }
        else if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    cout << "Element not found.";
    return 0;
}
