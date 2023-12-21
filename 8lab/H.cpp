#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, c=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    cin>>k;
    sort(a.begin(), a.end());
    for(int i=0; i<k; i++)cout<<a[i]<<" ";
}