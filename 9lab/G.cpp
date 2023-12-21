#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    while (s.find("11") != string::npos) {
        s.erase(s.begin() + s.find("11"), s.begin() + s.find("11") + 2);
    }
    cout << s;
}