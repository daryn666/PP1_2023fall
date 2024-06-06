#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << count_if(arr, arr+n, [](string i){ return i.back() == '7';});
}