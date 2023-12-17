#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int n, mx_n=1000;
    cin >> n;
    vector<int>pr;
    vector<bool>use(mx_n, true);
    for(int i=2; i<mx_n; i++){
        if(use[i]){
            pr.pb(i);
            for(int j=i*i; j<mx_n; j+=i) use[j] = false;
        }
    }

    for(int i:pr){
        if(use[n-i]){
            cout<<i<<" "<<n-i;
            return 0;
        }
    }
}