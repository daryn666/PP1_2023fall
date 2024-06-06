#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, previous = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(previous == arr[i]) arr[i] = 1e6;
        else previous = arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<n && arr[i] != 1e6; i++) cout << arr[i] << ' ';
    
}