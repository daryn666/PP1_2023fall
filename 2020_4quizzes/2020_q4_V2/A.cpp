#include <bits/stdc++.h>
using namespace std;
#define pb push_back
bool p(pair<string, int>f, pair<string, int>s){
    return f.second > s.second;
}
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    map<string, int>mp;
    while(ss>>s){
        mp[s]++;
    }
    vector<pair<string, int>>d;
    for(auto i:mp){
        d.pb({i.first, i.second});
    }
    sort(d.begin(), d.end(), p);
    for(auto i:d){
        cout<<i.first<<" : "<<i.second<<"\n";
    }
}