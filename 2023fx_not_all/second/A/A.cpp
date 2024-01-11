#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d[n];
    for(int i=0; i<n; i++)cin>>d[i];
    cout<<accumulate(d, d+n, 0)<<" "<<*max_element(d, d+n);
}