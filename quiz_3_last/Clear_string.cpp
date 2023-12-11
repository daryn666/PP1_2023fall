#include <iostream>
using namespace std;
string res(string s, int i=0){
    if(i==s.size()) return s;
    if(!isalpha(s[i])) return res(s.erase(i, 1), i);
    return res(s, i+1);
}
int main(){
    string s;
    cin>>s;
    cout<<res(s);
}