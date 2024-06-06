#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    for_each(arr, arr+n, [](int i){cout << i*i << ' ';});
}
