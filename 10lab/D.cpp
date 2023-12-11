#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
bool comp(vector<int>first, vector<int>second){
    int s1=0, s2=0;
    for(int i=0; i<max(first.size(), second.size()); i++){
        if(i<first.size())s1+=first[i];
        if(i<second.size())s2+=second[i];
    }
    if(s1<s2) return true;
    else if(s1==s2){
        if(first.size()<second.size()) return true;
        else if(first.size()==second.size()){
            for(int i=0; i<first.size(); i++){
                if(first[i]>second[i])return false;
            }
            return true;
        }
        else return false;
    }
    else return false;
}
int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n;
    cin>>n;
    vector<vector<int>>base(n);
    for(int i=0; i<n; i++){
        int k; cin>>k;
        vector<int>pod(k);
        for(int j=0; j<k; j++)cin>>pod[j];
        base[i]=pod;
    }
    sort(base.begin(), base.end(), comp);
    for(auto vec:base){
        for(int i:vec) cout<<i<<" ";
        cout<<"\n";
    }

}