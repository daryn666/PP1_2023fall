#include <iostream>
using namespace std;
int gcd(int x, int y){
    if(x*y==0) return x+y;
    return gcd(y%x, x);
}
int f(int a[], int n){
    int mx = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int tp=gcd(a[i], a[j]);
            if(mx<tp) mx=tp;
        }
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
    cout<<f(arr, n);
}