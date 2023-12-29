#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, int>mp;
    string s, mx_name;
    int mx = INT_MIN, x;
    while(n--){
        cin >> s >> x;
        mp[s] += x;
        if(mx < mp[s]){
            mx = mp[s];
            mx_name = s;
        }
    }
    for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++){
        if(it->first != mx_name) cout << it->first << " has to receive " << mx - it->second << "\n";
    }
    cout << mx_name << "is lucky!";
}