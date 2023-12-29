#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y;
    cin>>n;
    map<int, int>mp;
    while(n--){
        cin>>x>>y;
        cout<<mp[x+y]<<"\n";
        mp[x+y]++;
    }
}