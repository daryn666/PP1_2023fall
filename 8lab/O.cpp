#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    set<char>alpha;
    for(char i:s) alpha.insert(tolower(i));
    cout<<alpha.size()<<"\n";
    for(auto i:alpha)cout<<i<<" ";
}