#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, tg;
    cin >> n >> tg;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int k = upper_bound(arr, arr+n, tg) - arr;
    cout << ((k>0 && arr[k-1] == tg) ? k-1 : k);    
}