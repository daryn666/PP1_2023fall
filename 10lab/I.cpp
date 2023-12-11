#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n, tp;
    cin>>n;
    vector<int>d(n);
    for(int i=0; i<n; i++)cin>>d[i];
    vector<int>dup = d;
    reverse(dup.begin(), dup.end());
    for(int i=0; i<n; i++){
        if(d[i]==dup[i])cout<<"OK\n";
        else cout<<"Instead of "<<d[i]<<" here was "<<dup[i]<<"\n";
    }
}