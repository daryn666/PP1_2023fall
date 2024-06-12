#include <bits/stdc++.h>
using namespace std;
#define ans(bo) (bo?"YES":"NO")
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s.back();
}