#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin>>n;
    map<int, int>mp;
    for(int i=0; i<n; i++){
        cin>>x;
        mp[x]++;
    }
    for(map<int, int>::iterator i=mp.begin(); i!=mp.end(); i++){
        if(i->second==1){
            cout<<i->first;
            return 0;
        }
    }
}