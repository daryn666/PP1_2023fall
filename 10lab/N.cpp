#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tp;
    cin>>n;
    map<int, int>mp;
    for(int i=0; i<n; i++){
        cin>>tp;
        mp[tp]++;
    }
    int res[n], i = 0; res[n/2]=-1;
    for(auto v:mp){
        int x = v.second/2;
        while(x--){
            res[i] = v.first;
            res[n-1-i++] = v.first;
        }
        if(v.second%2 && res[n/2]!=-1){
            cout<<"Impossible";
            return 0;
        }
        else if(v.second%2) res[n/2] = v.first;
    }
    for(auto v:res) cout<<v<<" ";

    return 0;
}