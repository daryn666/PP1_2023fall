#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int s1 = 0, s2 = 0;
    for(int i=0; i<s.size(); i++){
        if(i%2==0) s1 += s[i]-'0';
        else s2 += s[i]-'0';
    }
    cout << (s1==s2 ? "YES" : "NO");
}