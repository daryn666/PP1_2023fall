#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin>>n;
    vector<int>e, o;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x%2==0) e.push_back(x);
        else o.push_back(x);
    }
    for(int i=0; i<e.size(); i++) cout<<e[i]<<" ";
    reverse(o.begin(), o.end());
    for(int i=0; i<o.size(); i++) cout<<o[i]<<" ";
}