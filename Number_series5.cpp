#include<iostream>
using namespace std;
//Program to print series 10,5,60,15,110...N.
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin >> n;
    int first = 10,second = 5;
    for(int i=0;i<n;i++){
        if(i % 2 == 0){
            cout<<first << " ";
            first  +=50;
            
        }
        else{
            cout<<second << " ";
            second +=10;
        }
    }
}

