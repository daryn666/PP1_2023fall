#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, sum=0, mx = INT_MIN;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        sum+=x;
        mx = max(mx, x);
    }
    cout<<sum<<" "<<mx;
}