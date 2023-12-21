#include <bits/stdc++.h>
//notmine
using namespace std;

int main() {
    int n, x, y;
    cin >> n;
    set <int> b;
    map <int, vector <int>> li;
    for (int i = 1; i <= n; ++i) {
        cin >> x >> y;
        b.insert(x + y);
        li[x + y].push_back(i);
    }
    for (auto i : b) {
        for (auto j : li[i]) {
            cout << j << " ";
        }
    }
}