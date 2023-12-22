#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d[n];
    for(int i=0; i<n; i++) cin>>d[i];
    int m, x;
    cin>>m;
    sort(d, d+n);
    for(int i=0; i<m; i++){
        cin>>x;
        int l=0, r=n-1, res=0;
        while(l<r){
            if(x == (d[l]+d[r])){
                res=1; break;
            }
            else if(x > (d[l]+d[r])) l++;
            else r--;
        }
        cout<<(res?"YES":"NO")<<"\n";
    }
}