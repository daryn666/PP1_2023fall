#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    cin>>n;
    map<string, double>mp, mp1;
    string s;
    while(n--){
        cin>>s>>a;
        mp[s]+=a;
        mp1[s]++;
    }
    cout<<fixed<<setprecision(3);
    for(map<string, double>::iterator i=mp.begin(); i!= mp.end(); i++){
        cout<<i->first + ' '<<i->second/mp1[i->first]<<"\n";
    }
}