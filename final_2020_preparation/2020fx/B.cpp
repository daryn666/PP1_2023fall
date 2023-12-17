#include <bits/stdc++.h>
using namespace std;
int main(){
    int tp;
    map<int, int>mp;
    cin>>tp;
    while(tp){
        mp[tp]++;
        cin>>tp;
    }
    for(int i=1; i<10; i++) cout<<mp[i]<<" ";
}