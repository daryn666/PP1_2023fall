#include <bits/stdc++.h>
using namespace std;
const long long mx = 10e5;
int main(){
    int n;
    cin>>n;
    int d[n];
    int x = (n-1)*n/2;
    // cout<<"x = "<<x<<"\n";
    int all[x], id=0;
    bool in[mx] = {false};
    for(int i=0; i<n; i++){
        cin>>d[i]; 
        in[d[i]] = true;
        for(int j=0; j<i; j++) all[id++] = (d[j]^d[i]);
    }
    int res=0;
    for(int i=0; i<x; i++){
        if(in[all[i]]) res++;
    }
    cout<<res;
}