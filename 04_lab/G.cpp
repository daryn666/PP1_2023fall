#include <bits/stdc++.h>
using namespace std;
#define f(n, x) string(n-x, '.') + to_string(x) + string(x-1, '.') + "\n";
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) cout << f(n, i);
}