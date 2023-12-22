#include <bits/stdc++.h>
using namespace std;
#define pb push_back
bool mine(vector<int>f, vector<int>s){
    return f[2]<s[2] || (f[2]==s[2] && f[1]<s[1]) || (f[2]==s[2] && f[1]==s[1] && f[0]<s[0]);
}
string co(int n){
    if(n<10) return '0'+to_string(n);
    else return to_string(n);
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>d;
    string s;
    for(int i=0; i<n; i++){
        cin>>s;
        vector<int>copy = {stoi(s.substr(0, 2)), stoi(s.substr(3, 2)), stoi(s.substr(6, 4))};
        d.pb(copy);
    }
    sort(d.begin(), d.end(), mine);
    for(auto v:d){
        cout<<co(v[0])<<'-'<<co(v[1])<<'-'<<v[2]<<"\n";
    }
}