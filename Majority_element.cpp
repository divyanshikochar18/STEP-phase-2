#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the elements: ";
    cin >> n;
    int arr[n];
    cout<<"Enter th elements of the array: ";
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int ans = 0,freq = 0;
    for(int i =0;i<n;i++){
        if(freq == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<"The majority element is: "<<ans;
    return 0;
}
