#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int>mp;
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        mp[s]++;
    }
    cin>>n;
    while(n--){
        cin>>s;
        mp[s]++;
    }
    for(map<string, int>::iterator i=mp.begin(); i!=mp.end(); i++){
        if(i->second==1) cout<<i->first<<" ";
    }
}