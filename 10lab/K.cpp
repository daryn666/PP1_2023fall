#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n;
    cin>>n;
    vector<int>d(n);
    for(int i=0; i<n; i++){
        cin>>d[i];
        if(d[i]<0)d[i]*=-1;
    }
    int times = count_if(d.begin(), d.end(), [](int x){
        if(x==1 || x==0) return false;
        for(int i=2; i<=sqrt(x); i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    });
    cout<<times;
}
