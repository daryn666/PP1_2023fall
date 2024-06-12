#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int f = s.find(t[0]), res = 0;
    while(f != string::npos){
        if(s.size() - f < t.size()) break;
        if(s.substr(f, t.size()) == t){
            res = 1;
            break;
        }
        f = s.find(t[0], f+1);
    }
    cout << (res ? "YES" : "NO");
}