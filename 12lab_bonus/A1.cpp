#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int mn=INT_MAX, r=0;
    int ar[n];
    for(int i=0; i<n; i++)cin>>ar[i];
    int k;
    cin>>k;
    for(int i=0; i<n; i++){
        if(mn>abs(ar[i]-k)){
            r=i;
            mn=abs(ar[i]-k);
        }
    }
    cout<<r;

    return 0;
}