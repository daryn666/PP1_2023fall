#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, l, r;
    cin>>n>>l>>r;
    int d[n];
    for(int i = 0; i < n; i++) cin >> d[i];
    reverse(d+l-1, d+r);
    for(int i = 0; i < n; i++) cout << d[i] << " ";
}