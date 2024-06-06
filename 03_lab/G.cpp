#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int mx = *max_element(arr, arr+n), mn = *min_element(arr, arr+n);
    for(int i=0; i<n; i++){
        if(arr[i]==mx)arr[i]=mn;
        cout<<arr[i]<<' ';
    }
}