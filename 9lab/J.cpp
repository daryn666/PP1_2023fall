#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ep; string name;
    cin>>n;
    map<string, int>dorama;
    for(int i=0; i<n; i++){
        cin>>name>>ep;
        dorama[name]+=ep;
    }
    for(auto it=dorama.begin(); it!=dorama.end(); it++){
        cout<<it->first<<" "<<it->second<<"\n";
    }
}