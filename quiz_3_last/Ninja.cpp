#include <iostream>
using namespace std;
string res(char c, string s, int id=0){
    if(id==s.size()) return s;
    if(s[id]==c) return res(c, s.substr(0, id) + s.substr(id+1, s.size()-id-1), id);
    else return res(c, s, id+1);
}
int main(){
    string s; char c;
    cin>>c>>s;
    cout<<res(c, s);
}