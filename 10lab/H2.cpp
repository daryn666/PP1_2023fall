#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n, tp;
    cin>>n;
    vector<int>d; 
    map<int, bool>ch;
    for(int i=0; i<n; i++){
        cin>>tp;
        if(!ch[tp]){
            d.pb(tp);
            ch[tp]=true;
        }
        
    }
    
    do{
        for(int i:d) cout<<i<<" ";
        cout<<"\n";
    }
    while(next_permutation(d.begin(), d.end()));
}