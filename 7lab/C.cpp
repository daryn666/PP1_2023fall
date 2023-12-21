#include <iostream>
#include <algorithm>
using namespace std;
bool res(int d[], int k, int l, int r){
    if(l>=r) return false;
    if(d[l]==k || d[r]==k || d[(l+r)/2]==k) return true;
    return res(d, k, (d[(l+r)/2]<k)?(l+r)/2+1:l, (d[(l+r)/2]>k)?(l+r)/2-1:r);
}
int main(){
    int n; cin>>n;
    int d[n]; for(int i=0; i<n; i++)cin>>d[i];
    int k; cin>>k;
    sort(d, d+n);
    cout<<(res(d, k, 0, n-1)?"Yes":"No");
}