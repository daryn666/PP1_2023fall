#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    map<string, int>mp;
    while(ss>>s){
        mp[s]++;
    }
    map<int, vector<string>>mp2;
    for(auto i:mp) mp2[i.second].pb(i.first);
    vector<pair<int, vector<string>>>d;
    for(auto i:mp2) {
        vector<string>copy = i.second;
        sort(copy.begin(), copy.end()); // sort strings in ascending order
        d.pb({i.first, copy});
    }
    sort(d.rbegin(), d.rend()); //sort in descending order
    for(auto i:d){
        for(string sz:i.second) cout<<sz<<" : "<<i.first<<"\n";
    }
}