#include <iostream>
#include <algorithm>
using namespace std;
bool res(int d[], int n, int k, int count=0){
    if(n==0 && count<2) return true;
    if(count>=2) return false;
    if(d[n]-d[n-1]<=k) count++;
    return res(d, n-1, k, count);
}
int main(){
    int n, k;
    cin>>n>>k;
    int d[n+1]; for(int i=0; i<n; i++)cin>>d[i];
    d[n] = 0; 
    sort(d, d+n+1);
    cout<<(res(d, n, k)?"no":"cheater");
}