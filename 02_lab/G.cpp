#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mx = 0, x;
    cin >> n;
    while(n--){
        cin >> x;
        mx = max(mx, x);
    }
    cout<<mx;
}
