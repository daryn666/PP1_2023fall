#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int* rev(int *a, int n){
    int tp;
    for(int i=0; i<n/2; i++){
        tp = a[n-1-i];
        a[n-1-i] = a[i];
        a[i]=tp;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0; i<n; i++)cin>>a[i];
    a = rev(a, n);
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
}