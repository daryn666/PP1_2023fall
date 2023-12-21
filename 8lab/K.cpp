#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, c=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(), a.end());
    cin>>k;
    int sum=0; 
    for(int i=0; i<k; i++)sum+=a[n-1-i];
    cout<<sum;
}