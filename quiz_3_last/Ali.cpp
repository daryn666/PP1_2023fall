#include <iostream>
using namespace std;
string res(string s){
    if(s=="1") return "true";
    else if(s=="0") return "false";
    else return s;
}
int main(){
    string s;
    cin>>s;
    cout<<res(s);
}