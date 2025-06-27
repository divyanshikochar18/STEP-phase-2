#include<iostream>
using namespace std;
//Program to print series -1 4 -7 10 -13 16 -19...n
int main(){
    int n;
    cout<< "Enter the number of terms: ";
    cin >> n;
    for(int i = 1;i<n;i++){
        int sum = (i*3)-2;
        if(i%2 != 0){
            cout << "-"<<sum << endl;
        }
        else{
            cout<< sum <<endl;
        }
    }
    return 0;
} 
