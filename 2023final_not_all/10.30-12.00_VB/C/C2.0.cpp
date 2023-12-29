//if we need cout in order that given at start:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    cin>>n;
    map<string, double>mp, mp1;
    vector<string>names;
    string s;
    while(n--){
        cin>>s>>a;
        if(mp1[s]==0)names.push_back(s);
        mp[s]+=a;
        mp1[s]++;
    }
    cout<<fixed<<setprecision(3);
    for(int i=0; i<names.size(); i++){
        string name = names[i];
        cout<<name + ' '<<mp[name]/mp1[name]<<"\n";
    }
}