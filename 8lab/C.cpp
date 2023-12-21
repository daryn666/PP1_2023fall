#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k1, k2;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    cin>>k1>> k2;
    int len = (k2-k1)/2 + ((k2-k1)%2);
    for(int i=0; i<len; i++){
        int tp=a[k1+i];
        a[k1+i] = a[k2-i];
        a[k2-i] = tp;
    }
    for(int i:a) cout<<i<<' ';
}