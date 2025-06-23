#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int mid = n / 2;

    // rows
    for(int i = 0; i < n; i++){
        // inner loop for cols
        for(int j = 0; j < n; j++){
            if(i == mid && j == mid)
                cout << "* ";
            else
                cout << "~ ";
        }
        cout << endl;
    }

    return 0;
}
