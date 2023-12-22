#include <bits/stdc++.h>
using namespace std;
#define pb push_back
bool mine(string f, string s){
    return stoi(f.substr(6, 4)) < stoi(s.substr(6, 4)) || (stoi(f.substr(6, 4)) == stoi(s.substr(6, 4)) && stoi(f.substr(3, 2)) < stoi(s.substr(3, 2))) || (stoi(f.substr(6, 4)) == stoi(s.substr(6, 4)) && stoi(f.substr(3, 2)) == stoi(s.substr(3, 2)) && stoi(f.substr(0, 2)) < stoi(s.substr(0, 2)));
}

int main(){
    int n;
    cin>>n;
    vector<string>d(n);
    for(int i=0; i<n; i++) cin>>d[i];
    sort(d.begin(), d.end(), mine);
    for(auto i:d) cout<<i<<"\n";
}