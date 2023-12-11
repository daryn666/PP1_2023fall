#include <iostream>
using namespace std;
bool check(char c, string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]==c) return true;
    }
    return false;
}
int main(){
    string s, s2;
    char ch;
    cin>>s>>s2>>ch;
    for(int i=0; i<s.size(); i++){
        if(check(s[i], s2)) s[i]=ch;
    }
    cout<<s;
}