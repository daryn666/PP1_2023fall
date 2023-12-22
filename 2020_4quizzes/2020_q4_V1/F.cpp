#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    int mx=0; string res;
    while(ss>>s){
        if(s.size()>mx){
            mx=s.size();
            res=s;
        }
    }
    cout<<res;
}