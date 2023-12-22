#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y;
    cin>>n;
    map<pair<int, int>, int>mp;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        if(x>y) swap(x, y);
        cout<<mp[{x, y}]<<"\n";
        mp[{x, y}]++;
    }
}