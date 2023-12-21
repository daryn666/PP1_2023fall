#include <bits/stdc++.h>
using namespace std;
#define pb push_back
bool res(int a[], int x, int n){
    bool r=false;
    int s = n/2+(n%2?1:0);
    for(int i=0; i<s; i++){
        if(a[i]==x){
            r=true; break;
        }
        if(a[n-1-i]==x){
            r=true; break;
        }
    }
    return r;
}
int main(){
    int n, x;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    cin>>x;
    cout<<((res(a, x, n))?"YES":"NO");
}