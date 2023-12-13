#include <bits/stdc++.h>
using namespace std;
const long long mx = 10e5;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    map<int, bool>mp;
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
        for(int j=0; j<i; j++) mp[arr[i]+arr[j]]=true;
    }
    int m;
    cin>>m;
    int res=0;
    for(int i=0; i<m; i++){
        cin>>res;
        if(mp[res]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}