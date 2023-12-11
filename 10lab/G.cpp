#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; string s1, s2; int n1, n2;
    map<pair<pair<string, int>, pair<string, int>>, int>mp;
    for(int i=0; i<n; i++){
        cin>>s1>>n1>>s2>>n2;
        mp[{{s1, n1}, {s2, n2}}] = n1+n2;
    }
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<(it->first).first.first<<" and "<<(it->first).second.first<<" "<<it->second<<"\n";
    }
}