#include <bits/stdc++.h>
using namespace std;

void printTotalNumberAndTheMaximumNumberOfChips(int arr[], int n){
    int sum = 0, mx = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        mx = max(mx, arr[i]);
    }
    cout << sum << " " << mx;
}
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i]; 
    printTotalNumberAndTheMaximumNumberOfChips(arr, n) ;
    
}