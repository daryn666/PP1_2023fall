#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    string s1, s2, s;
    cin >> n;
    map<string, bool>exist;
    for(int i = 0; i < n; i++){
        cin >> s;
        exist[s] = true;
    }
    cin >> m;
    map<string, set<string>>mp;
    for(int i = 0; i < m; i++){
        cin >> s1 >> s2;
        mp[s1].insert(s2);
        mp[s2].insert(s1);
    }
    cin>>s;
    set<string>res;
    for(auto i:mp[s]){
        if(exist[i]) res.insert(i); 
    }
    cout<<res.size()<<"\n";
    for(auto i:res) cout<<i<<" ";
}