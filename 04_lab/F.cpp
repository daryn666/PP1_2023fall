#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mx = -2e9, imx=0, jmx=0, x;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> x;
            if(x > mx){
                mx = x;
                imx = i; jmx = j;
            }
        }
    }
    cout << imx << ' ' << jmx;
}