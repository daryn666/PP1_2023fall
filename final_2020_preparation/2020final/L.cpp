#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, tp;
        cin>>n;
        map<int, int>mp;
        int d[n];
        for(int i=0; i<n; i++){
            cin>>d[i];
            mp[d[i]]++;
        }
        bool res=true;
        int mn_id=0;
        for(int i=0; i<n; i++){
            if(mp[d[i]]==1 && d[mn_id] > d[i]){
                mn_id = i;
                res=false;
            }
        }
        if(res) cout<<"ZA WARUDO\n";
        else cout<<mn_id+1<<"\n";
    }
}