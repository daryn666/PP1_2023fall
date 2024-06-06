#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    reverse(arr+l-1, arr+r);
    for(int i=0; i<n; i++) cout << arr[i] << ' ';
}