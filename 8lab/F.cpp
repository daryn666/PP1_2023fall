#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k1, k2;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    cin>>k1>>k2;
    a.insert(a.begin()+k1, k2);
    for(int i:a)cout<<i<<" ";
}