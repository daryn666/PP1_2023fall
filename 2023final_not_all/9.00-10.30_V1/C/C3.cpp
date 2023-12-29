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
    for(int i=l; i<=r; i++){
        if(find(v.begin(), v.end(), i)==v.end()) cout<<i<<" ";
    }
}