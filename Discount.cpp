#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int r1, r2, r3;
    cin >> r1 >> r2 >> r3;
    
    // total discount
    double total_discount = 0.2 * (r1 + r2 + r3);
    // cout << total_discount << endl;
    
    // find minimum
    int min_price = min({r1, r2, r3});
    // cout << min_price;
    
    // cases
    if(total_discount > min_price){
        cout << "DISCOUNT" << endl;
    }
    else {
        cout << "FREE ITEM" << endl;
    }

    return 0;
}
