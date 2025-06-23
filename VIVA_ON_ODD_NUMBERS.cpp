#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int number;
    int odd_count = 0;
    double score = 0.0;

    while (odd_count < 3){
        cin >> number;

        // negative number
        if (number < 0){
            score -= 1.0;
            break;
        }
        // positive odd number
        else if(number > 0 && number % 2 == 1){
            score += 1.0;
            odd_count++;
        }
        // positive even number
        else if(number > 0 && number % 2 == 0){
            score -= 0.5;
        }
    }

    cout << fixed << setprecision(1) << score << endl;
    return 0;
}
