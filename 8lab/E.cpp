#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k1, k2;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    cin>>k1>>k2;
    int k = k2-k1+1;
    while(k--){
        a.erase(a.begin()+k1);
    }
    for(int i:a)cout<<i<<" ";
}