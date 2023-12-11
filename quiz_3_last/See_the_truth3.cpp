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
    while(cin>>s){ 
        if(check(s)) cout<<s<<"\n"; 
    } 
}