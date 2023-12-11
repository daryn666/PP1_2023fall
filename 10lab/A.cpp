#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n;
    cin>>n;
    vector<string>f(n); vector<int>s(n);
    for(int i=0; i<n; i++){
        cin>>f[i]>>s[i];
    }
    sort(f.begin(), f.end()); sort(s.begin(), s.end());
    for(int i=0; i<n; i++){
        cout<<f[i]<<" "<<s[i]<<"\n";
    }
}