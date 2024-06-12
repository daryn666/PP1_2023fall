#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mx = -2e9, mx2 = -2e9, x;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> x;
            if(x > mx){
                mx2 = mx;
                mx = x;
            }
            else if(x > mx2 && x < mx) mx2 = x;
        }
    }
    cout << (mx2 == -2e9 ? 0 : mx2);
}