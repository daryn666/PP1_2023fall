#include <bits/stdc++.h>
using namespace std;
#define pb push_back
string res(string s){
    int len=s.size();
    int l=len/2+len%2;
    bool r=true;
    for(int i=0; i<len; i+=2){
        if(int(s[i])>=97 && int(s[i])<=122)s[i] = char(int(s[i])-32);
        
    }
    return s;
}
int main(){
    string s;
    getline(cin,s);
    cout<<res(s);
}