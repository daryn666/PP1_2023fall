#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool pr[n+1];
    fill(pr, pr+n+1, false);
    for(int i=2; i<=n; i++){
        if(!pr[i]){
            for(int j=i*i; j<=n; j+=i) pr[j] = true;
        }
    }
    for(int i=2; i<=n; i++){
        if(!pr[i]) cout << i << " is prime\n";
    }
}