#include<iostream>
#include<vector>
using namespace std;

// Function to calculate max profit
int maxProfit(vector<int>& prices){
    int maxProfit = 0, bestBuy = prices[0];
    for(int i = 1; i < prices.size(); i++){
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = maxProfit(arr);
    cout << "Max Profit = " << result << endl;

    return 0;
}
