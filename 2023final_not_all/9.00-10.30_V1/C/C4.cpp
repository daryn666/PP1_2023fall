#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, r, x;
    cin>>l>>r;
    vector<int>v;
    while(cin>>x){
        v.push_back(x);
        if(cin.get()=='\n') break;
    }
    sort(v.begin(), v.end());
    //first:
    // for(int i=l; i<=r; i++){
    //     if(!v.empty() && v[0]==i){
    //         v.erase(v.begin());
    //         continue;
    //     }
    //     cout<<i<<" ";
    // }

    //second:
    int id=0;
    for(int i=l; i<=r; i++){
        if(id<v.size() && v[id]==i){
            id++;
            continue;
        }
        cout<<i<<" ";
    }
}