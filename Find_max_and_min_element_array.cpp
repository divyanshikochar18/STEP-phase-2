#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max)
        max = arr[i];
        if(arr[i]< min)
        min = arr[i];
    }
    cout<<"The maximum element is: "<<max<<endl;
    cout << "The minimum element is: "<<min<<endl;
    return 0;
    
}
