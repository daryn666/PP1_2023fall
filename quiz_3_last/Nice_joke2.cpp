#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int x, int y){
    if(x*y==0) return x+y;
    return gcd(y%x, x);
}
int res(int d[], int n){
    int mx=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(d[j]<=mx) break;
            if(gcd(d[i], d[j])>mx) mx = gcd(d[i], d[j]);
        }
        if(d[i]<=mx) break;
    }
    return mx;
}
int main(){
    int n;
    cin>>n;
    int d[n];
    for(int i=0; i<n; i++)cin>>d[i];
    sort(d, d+n, greater<int>());
    cout<<res(d, n);
}