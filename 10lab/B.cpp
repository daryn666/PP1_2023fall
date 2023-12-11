#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull pown(ull n){
    ull res=1;
    for(int i=0; i<n; i++)res*=n;
    return res;
}
ull power(){
    static ull i=-1;
    i++;
    return pown(i);
}

int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n;
    cin>>n;
    vector<ull>res(n+1);
    generate(res.begin(), res.end(), power);
    for(ull i:res) cout<<i<<" ";
}