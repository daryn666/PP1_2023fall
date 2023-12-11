
#include <bits/stdc++.h>

using namespace std;
#define pb push_back
int main(){
    int n;
    map<string, double>d;
    cin>>n;
    string s;
    double total=0, tp;
    for(int i=0; i<n; i++){
        cin>>s>>tp;
        d[s]+=tp;
        total+=tp;
    }
    vector<pair<double, string>>res;
    for(auto it:d){
        res.pb({it.second/total*100.0, it.first});
    }
    sort(res.begin(), res.end());
    for(int i=res.size()-1; i>=0; i--){
        cout<<res[i].second<<" "<<res[i].first<<"%\n";
    }
}