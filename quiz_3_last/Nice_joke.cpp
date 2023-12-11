#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(a*b==0) return a+b;
    return gcd(b%a, a);
}
int res(int d[], int n){
    int mx=1;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int tp=gcd(d[i], d[j]);
            if(mx<tp) mx=tp;
        }
    }
    return mx;
}
int main(){
    int n;
    cin>>n;
    int d[n]; for(int i=0; i<n; i++)cin>>d[i];
    cout<<res(d, n);
}