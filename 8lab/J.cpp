#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, c=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    int mx, mn, len = n/2+n%2;
    for(int i=0; i<n; i++){
        if(i==0){
            mx=a[i]; mn=a[i];
        }
        else if(mx<a[i]) mx=a[i];
        else if(mn>a[i]) mn=a[i];
    }
    cout<<(mx-mn);
}