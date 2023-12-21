#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void difference(int a[], int b[], int n){
    int d[n];
    for(int i=0; i<n; i++){
        d[i] = abs(a[i]-b[i]);
    }
    for(auto i:d)cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    difference(a, b, n);
}