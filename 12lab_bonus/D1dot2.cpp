#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int x, int y){
    if(x*y==0) return x+y;
    return gcd(y%x, x);
}
int f(int d[], int n){
    int mx=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(d[j]<=mx) break;
            mx = max(mx, gcd(d[i], d[j]));
        }
        if(d[i]<=mx) break;
    }
    return mx;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>());
    cout<<f(arr, n);
}