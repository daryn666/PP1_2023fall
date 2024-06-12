#include <bits/stdc++.h>
using namespace std;
#define ans(bo) (bo?"YES":"NO")
int main()
{
    string s, s2;
    cin >> s;
    s2 = s;
    sort(s2.begin(), s2.end());
    cout << ans(s==s2);
}