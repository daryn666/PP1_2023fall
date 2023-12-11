#include <bits/stdc++.h>
using namespace std;
string res(string s, int id=0){
    if(id==s.size()) return s;
    if(isdigit(s[id]) || isupper(s[id])) return res(s.erase(id, 1), id);
    else return res(s, id+1);
}
int main(){
    string s;
    cin>>s;
    cout<<res(s);
}