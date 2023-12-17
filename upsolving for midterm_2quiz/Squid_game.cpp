#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, tp;
    cin>>n>>m;
    int mx=0, mx_c=0;
    for(int i=0; i<n; i++){
        mx_c=0;
        for(int j=0; j<m; j++){
            cin>>tp;
            mx_c+=tp;
        }
        if(mx<mx_c) mx=mx_c;
    }
    cout<<mx;
    
}