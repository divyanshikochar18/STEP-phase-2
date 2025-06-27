#include<iostream>
using namespace std;
//Program to print series 2,15,41,80...n
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin >> n;
    for(int i = 1;i<n;i++){
        int sum = (13 * i * i - 13 * i + 4) / 2;
        sum;
        cout << sum << " ";
    }
    return 0;
}
