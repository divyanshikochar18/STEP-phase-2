#include<iostream>
using namespace std;

int main(){
    int weight;
    cin >> weight;

    if(weight % 2 == 0){
        cout << "YES" << endl;
        cout << weight / 2 << " " << weight / 2 << endl;
    }
    else if(weight > 100){
        cout << "INVALID INPUT" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
