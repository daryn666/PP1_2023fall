#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int main()
{
    int n;
    cin >> n;
    string arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    for_each(arr, arr+n, [](string i){ ans += count(i.begin(), i.end(), '0'); return 0;});
    cout << ans;
}
