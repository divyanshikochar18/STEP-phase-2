#include<iostream>
using namespace std;

double myPow(double x, int n) {
    long binForm = n;
    if(n < 0){
        x = 1 / x;
        binForm = -binForm;
    }

    double ans = 1;
    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main(){
    double x;
    int n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    double result = myPow(x, n);
    cout << x << "^" << n << " = " << result << endl;

    return 0;
}
