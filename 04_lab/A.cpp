#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, mx = -1e5, x;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> x;
            mx = max(mx, x);
        }
    }
    cout << mx;
}