#include <bits/stdc++.h>
using namespace std;
bool res(string s){
    int sum=0, c=int(s[s.size()-1])-48;
    for(int i=0; i<s.size()-1; i++)sum+=int(s[i])-48;
    return ((sum%c)?false:true);
}

int main(){
    string s;
    getline(cin, s);
    cout<<(res(s)?"YES":"NO");
}