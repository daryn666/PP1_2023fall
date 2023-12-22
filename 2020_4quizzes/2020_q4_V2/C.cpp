#include <bits/stdc++.h>
using namespace std;
const int mx = 10e4; // since 1<=n<=100
int main(){
    int n;
    cin>>n;
    vector<bool>used(mx, true); used[1]=false;
    int pr=0, suppr=0;
    for(int i=2; i<mx; i++){
        if(used[i]){
            for(int j=i*i; j<mx; j+=i) used[j] = false;
            pr++;
            if(used[pr]) suppr++;
            if(suppr==n){
                cout<<i;
                return 0;
            }
        }
    }
}