#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n, m;
    cin>>n>>m;
    vector<int>d(n);
    for(int i=0; i<n; i++)cin>>d[i];
    reverse(d.begin(), d.end());
    rotate(d.begin(), d.begin()+(n-m), d.end());
    for(int i:d) cout<<i<<" ";
}