#include <bits/stdc++.h>
using namespace std;
#define ans(bo) (bo?"YES":"NO")

int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++) s[i] = 'a' + (s[i]-'a'+1)%26;
    cout << s;
}
