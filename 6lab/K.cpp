#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int res(string s){
    int a = 0;
    for(int i=0; i<s.size(); i++) a+=s[i]-48;
    return a;
}
int main(){
    string s;
    getline(cin,s);
    cout<<res(s);
}