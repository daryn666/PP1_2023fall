#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=0, z;
    for(int i=0; i<n; i++){ 
        cin>>z;
        d^=z;
    }
    int p = log2(d);
    cout<<(powl(2, p)==d?"YES":"NO");
    //cout<<(ceil(log2(d))==floor(log2(d))?"YES":"NO");
}
