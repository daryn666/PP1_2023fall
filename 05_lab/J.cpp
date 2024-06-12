#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1, s2;
    cin >> s;
    bool added = 0;
    for(int i=0; i<s.size()/2; i++){
        if(s[i] != s[s.size()-1-i]){
            s1 = s.substr(0, i) + s.substr(i+1, s.size()-1-i);
            s2 = s.substr(0, s.size()-1-i) + s.substr(s.size()-i, i);
            break;
        }
    }
    // s1 or s2 should be palindrome if answer is yes
    bool res1 = true, res2 = true;
    for(int i=0; i<s1.size()/2 && res1; i++){
        if(s1[i]!=s1[s1.size()-1-i]) res1 = false;
    }
    for(int i=0; i<s2.size()/2 && res2; i++){
        if(s2[i]!=s2[s1.size()-1-i]) res2 = false;
    }
    cout << ((res1 || res2) ? "YES" : "NO");

}