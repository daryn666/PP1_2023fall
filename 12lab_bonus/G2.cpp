#include <bits/stdc++.h>
using namespace std;

void printTotalNumberAndTheMaximumNumberOfChips(int arr[], int n){
    int sum = accumulate(arr, arr+n, 0), mx = *max_element(arr, arr+n);
    cout << sum << " " << mx;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i]; 
    printTotalNumberAndTheMaximumNumberOfChips(arr, n) ;
    
}