#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "series: ";
    long factorial = 1;
    for (int i = 1;i<=n ; i++){
        factorial *= i;
        cout << i*i << "/"<<factorial <<" ";
    }
    return 0;
}
