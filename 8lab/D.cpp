#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    cin>>k;
    a.erase(a.begin()+k);
    for(int i:a)cout<<i<<" ";
}