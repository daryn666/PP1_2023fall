#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t, sum=0;
    map<string, int>d;
    cin>>n;
    string name, weak;
    while(n--){
        cin>>name>>weak;
        d[weak]++;
    }
    cin>>n;
    while(n--){
        cin>>name>>weak>>t;
        d[weak] -= min(d[weak], t);
    }
    for(map<string, int>::iterator i=d.begin(); i!=d.end(); i++) sum+=i->second;
    cout<<sum;
}