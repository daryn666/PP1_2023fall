#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define d double
d res=0;
void print(pair<string, d>value){
    cout<<value.first<<" "<<value.second/res*100<<"\n";
}
int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int t;
    cin>>t;
    map<string, d>vp;
    while(t--){
        d n, tp2;string tp1;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>tp1>>tp2;
            vp[tp1]+=tp2;
            res+=tp2;
        }
    }
    for_each(vp.begin(), vp.end(), print);

}