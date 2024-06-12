#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, cnt = 0, x;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> x;
            if(x < 0) cnt++;
        }
    }
    cout << cnt;
}