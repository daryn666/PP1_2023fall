#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    long long arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cout << accumulate(arr+l-1, arr+r, 0LL);
}