#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d[n];
    map<int, bool>mp;
    for(int i=0; i<n; i++){
        cin>>d[i];
        for(int j=0; j<i; j++) mp[d[j]+d[i]]=true;
    }
    int m, x; cin>>m;
    for(int i=0; i<m; i++){
        cin>>x;
        cout<<(mp[x]?"YES":"NO")<<"\n";
    }
}