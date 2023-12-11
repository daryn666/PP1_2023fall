#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void bin(int x){
    string bn;
    while(x){
        bn += to_string(x%2); x/=2;
    }
    reverse(bn.begin(), bn.end());
    cout<<bn<<"\n";
}
int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n;
    cin>>n;
    vector<int>d(n);
    for(int i=0; i<n; i++) cin>>d[i];
    for_each(d.begin(), d.end(), bin);
}