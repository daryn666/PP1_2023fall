#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << count_if(arr, arr+n, [](int i){ return i % 2 == 0;}) << " " << count_if(arr, arr+n, [](int i){ return i % 2 == 1;}) ;
}
