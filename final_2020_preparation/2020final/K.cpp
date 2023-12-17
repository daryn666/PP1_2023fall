#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, string>mp;
    string a, b;
    set<string>olds, news;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(news.find(a) == news.end()){
            olds.insert(a);
        }
        news.insert(b);
        mp[a]=b;
    }
    cout<<olds.size()<<"\n";
    for(auto i:olds){
        string st = i;
        while(!mp[st].empty() && mp[st]!=i){
            st = mp[st];
        }
        cout<<i<<" "<<st<<"\n";
    }
}