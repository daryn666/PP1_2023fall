#include <iostream>
using namespace std;
bool res(string s){
    if(s.empty())return true;
    if(s[0]!=s[s.size()-1]) return false;
    else return res(s.substr(1, s.size()-2));
}
int main(){
    string s;
    cin>>s;
    cout<<(res(s)?"Yes":"No");
}