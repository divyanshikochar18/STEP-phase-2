#include<iostream>
#include<string>
using namespace std;
string digitToWord(char digit){
    switch(digit){
        case '0': return "Zero";
        case '1': return "First";
        case '2': return "Two";
        case '3': return "Three";
        case '4': return "Four";
        case '5': return "Five";
        case '6': return "Six";
        case '7': return "Seven";
        case '8': return "Eight";
        case '9': return "Nine";
        default: return"";
    }
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    string numStr = to_string(n);
    cout<<"In words: ";
    for(char digit : numStr){
        cout<<digitToWord(digit)<<" ";
    }
    cout << endl;
    return 0;
 }
