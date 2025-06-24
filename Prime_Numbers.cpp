#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num <= 1)
        return false;
    for (int i = 2;i*i<=num;i++){
        if(num%i == 0)
            return false;
    }
    return true;
}
int main(){
    int limit;
    cout<<"Enter the number: ";
    cin >> limit;
    cout << "Prime numbers less than "<< limit << "are: ";
    for(int i = 2;i<limit;i++){
        if(isPrime(i)){
            cout<<i<<" ";    
        }
    }
    cout << endl;
}
