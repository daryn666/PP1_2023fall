#include <bits/stdc++.h>
//notmine
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int m = 2 * n;
    vector<string> v(m, string(2*m - 1, ' '));
    for (int i = 0; i < m; ++i) {
        v[i][i] = v[i][2*m - i - 2] = '*'; // sides 
        if (i < n) v[i][m - i - 2] = v[i][m + i] = '*'; // inside
        if (i > 0) v[n][n + i - 1] = v[0][i - 1] = v[0][2*m - i - 1] = '*'; // rows
    }

    reverse(v.begin(), v.end());
    for (auto& s : v) cout << s << '\n';
}
