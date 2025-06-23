#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float prdz,pr1;
    cout<< "Enter the price of a dozen mangoes"<<endl;
    cin >> prdz;
    cout<<"Enter the price at which 1 mango is being sold" << endl;
    cin>>pr1;
    double price = pr1 * 12;
    //cout<<price;
    cout << fixed << setprecision(2);
    if(prdz > price){
        cout<< "Loss Rs."<<prdz - price<<endl;
    }
    else if(price>prdz){
        cout << "Profit Rs."<<price - prdz << endl;
    }
    else{
        cout << "No profit no loss";
    }
    return 0;
}
