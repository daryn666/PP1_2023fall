#include <iostream>
#include <sstream>
using namespace std;
bool check(string s){
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])) return false;
    }
    return true;
}
int main(){
    string input;
    stringstream s;
    getline(cin, input);
    s<<input;
    string n;
    while(s>>n){
        if(check(n)) cout<<n<<'\n';
    }

    return 0;
}