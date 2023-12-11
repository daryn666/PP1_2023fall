#include <iostream>
#include <string>
using namespace std;
bool check(string s){
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])) return false;
    }
    return true;
}
int main(){
    string s;
    getline(cin, s);
    while(true){
        int f = s.find(char(32));
        if(check(s.substr(0, f))) cout<<s.substr(0, f)<<"\n";
        s.erase(0, f+1);
        if(f==string::npos)break;
    }
}
