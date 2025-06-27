#include<iostream>
using namespace std;
//Program to print series 0,6,10,17,22,30,36...N
int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int evenptr = 6,oddptr = 0;
    int oddstep = 10,evenstep = 11;
    for(int i=0; i<n;i++){
        if(i%2 == 0){
            cout<<oddptr<<" ";
            oddptr += oddstep;
            oddstep+=2;
            
        }
        else{
            cout<<evenptr<< " ";
            evenptr +=evenstep;
            evenstep+=2;
        }
    }
    return 0;
}
