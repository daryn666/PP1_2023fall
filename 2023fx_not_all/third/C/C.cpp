#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s1, s2;
    cin>>n;
    map<string, string>translate;
    while(n--){
        cin>>s1>>s2;
        translate[s1] = s2;
    }
    cout << translate[s1];
    // but if we need last it->second, cout << (--translate.end())->second; or translate.rbegin()->second;
}