#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr,int n,int m,int maxAllowedPages){
    int stu = 1,pages = 0;
    for (int i = 0;i<n;i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            stu++;
            pages = arr[i];
        }
    }
    return stu > m ? false : true;
}
int allocateBooks(vector<int> &arr,int n,int m){
    if(m > n){
        return -1;
    }
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += arr[i];
    }
    int ans = -1; 
    int st = 0, end = sum;
    while(st<=end){
        int mid = st + (end - st) / 2;
        if(isValid(arr,n,m,mid)){
            //left
            ans = mid;
            end  = mid -1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
}
int main() {
    int n, m;
    cout << "Enter number of books: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the number of pages in each book:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of students: ";
    cin >> m;

    int result = allocateBooks(arr, n, m);

    if(result != -1) {
        cout << "Minimum possible maximum pages: " << result << endl;
    } else {
        cout << "Allocation not possible (more students than books)." << endl;
    }

    return 0;
}
