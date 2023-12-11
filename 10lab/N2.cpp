#include <bits/stdc++.h>
using namespace std;
#define pb push_back
bool check_pl(vector<int>d){
    for(int i=0; i<d.size()/2; i++){
        if(d[i]!=d[d.size()-1-i])return false;
    }
    return true;
}
int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n, mx=INT_MIN;
    cin>>n;
    vector<int>d(n); vector<bool>check(1000000000, false);
    for(int i=0; i<n; i++){
        cin>>d[i];
        if(mx<d[i])mx=d[i];
        if(check[d[i]]) check[d[i]]=false;
        else check[d[i]]=true;
    }
    vector<bool>ch(check.begin(), check.begin()+mx+1);
    int r=0;
    for(int i=1; i<=mx; i++){
        if(ch[i])r++;
    }
    if(n%2!=r) cout<<"Impossible";
    else{
        sort(d.begin(), d.end());
        if(check_pl(d)){
                for(int i:d) cout<<i<<" ";
            }
        while(next_permutation(d.begin(), d.end())){
            if(check_pl(d)){
                for(int i:d) cout<<i<<" ";
                break;
            }
        }
    }
}