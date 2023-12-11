#include <iostream>
using namespace std;
char to(char c){
    if(isalpha(c) && c!='z' && c!='Z') return c+1;
    else if(isalpha(c)) return c-25;
    else return c;
}
int main(){
    string s;
    getline(cin, s);
    for(int i=0; i<s.size(); i++){
        s[i] = to(s[i]);
    }
    cout<<s;
}