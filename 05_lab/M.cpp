#include <bits/stdc++.h>
using namespace std;
#define ans(bo) (bo?"YES":"NO")
int main()
{
    string s;
    char c;
    int x;
    cin >> s >> c >> x;
    cout << ans(count(s.begin(), s.end(), c) == x);
}