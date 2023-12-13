#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int min_i=0, d[n], k;
    for(int i=0; i<n; i++)cin>>d[i];
    cin>>k;
    for(int i=0; i<n; i++){
        if(abs(k-d[min_i]) > abs(k-d[i]))min_i=i;
    }
    cout<<min_i;

    return 0;
}

