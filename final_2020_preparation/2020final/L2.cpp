#include <bits/stdc++.h>
//idk
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, tp;
        cin>>n;
        bool in[n+1]={false}, doesnt[n+1]={false};
        int d[n];
        for(int i=0; i<n; i++){
            cin>>d[i];
            if(in[d[i]]){
                doesnt[n+1]=true;
            }
            else in[d[i]]=true;
        }
        bool res=true;
        int mn_id=0;
        for(int i=0; i<n; i++){
            if(!doesnt[d[i]] && d[mn_id] > d[i]){
                mn_id = i;
                res=false;
            }
        }
        if(res) cout<<"ZA WARUDO\n";
        else cout<<mn_id+1<<"\n";
    }
}