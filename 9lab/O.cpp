#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n; string log, pas;
    cin>>n;
    map<string, string>reg;
    for(int i=0; i<n; i++){
        cin>>log>>pas;
        reg[log]=pas;
    }
    int t;
    cin>>t;
    while(t--){
        cin>>log>>pas;
        if(reg.find(log)==reg.end())cout<<"login error\n";
        else if(reg[log]!=pas) cout<<"password error\n";
        else cout<<"correct password\n";
    }

}