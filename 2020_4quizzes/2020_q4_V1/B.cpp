#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++) s[i] = (26-s[i]+96+1)+96;
    cout<<s;
}