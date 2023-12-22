#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d[n];
    set<int>st;
    for(int i=0; i<n; i++){
        cin>>d[i];
        for(int j=0; j<i; j++) st.insert(d[j]+d[i]);
    }
    // also:
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++) st.insert(d[i]+d[j]);
    // }
    int m, x; cin>>m;
    for(int i=0; i<m; i++){
        cin>>x;
        if(st.find(x)!=st.end()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}