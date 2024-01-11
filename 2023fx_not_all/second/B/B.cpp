#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, d;
    getline(cin, s);
    d = s;
    reverse(s.begin(), s.end());
    cout << (s == d ? "YES" : "NO");
}