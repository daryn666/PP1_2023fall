#include <bits/stdc++.h>
using namespace std;
const long long mx = 10e5;
int main(){
    int n;
    cin>>n;
    set<int>s;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        for(int j=0; j<i; j++) s.insert(arr[j]+arr[i]);
    }
    int m;
    cin>>m;
    int res=0;
    for(int i=0; i<m; i++){
        cin>>res;
        if(s.find(res)!=s.end()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}