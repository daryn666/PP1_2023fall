#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, mn = 101*10, res=0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int sum = 0, x;
        for(int j=0; j<m; j++){
            cin >> x; sum += x;
        }
        if(sum < mn){
            mn = sum;
            res = i+1;
        }
    }
    cout << res;
}