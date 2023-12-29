// cout names in order that given at start
#include <bits/stdc++.h>
using namespace std;
//nah, idk
#define ll long long
void men(string s, vector<int>v){
    double sum = accumulate(v.begin(), v.end(), 0);
    cout<<s+' '<<sum/double(v.size())<<"\n";
}
int main(){
    int n, a;
    cin>>n;
    map<string, vector<int>>mp;
    vector<string>names;
    string s;
    while(n--){
        cin>>s>>a;
        if(mp[s].empty())names.push_back(s);
        mp[s].push_back(a);
    }
    cout<<fixed<<setprecision(3);
    for(int i=0; i<names.size(); i++) men(names[i], mp[names[i]]);
}