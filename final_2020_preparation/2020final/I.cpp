#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int mx = 0;
    for(int i=1; i<=min(s1.size(), s2.size()); i++){
        if(s1.substr(s1.size()-i, i) == s2.substr(0, i)){
            mx = i;
        }
    }
    string res1 = s1.substr(0, s1.size()-mx) + s2;
    mx=0;
    for(int i=1; i<=min(s1.size(), s2.size()); i++){
        if(s2.substr(s2.size()-i, i) == s1.substr(0, i)){
            mx = i;
        }
    }
    string res2 = s2.substr(0, s2.size()-mx) + s1;
    cout<<((res1.size()<=res2.size())?res1:res2);
   
}