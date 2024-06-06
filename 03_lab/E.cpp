#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cout << accumulate(arr, arr+n, 0LL);
}