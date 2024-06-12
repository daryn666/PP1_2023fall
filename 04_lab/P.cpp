#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    long long sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> x;
            if(i==(n-1-j)) sum += x;
        }
    }
    cout << sum;
}