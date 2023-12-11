#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void bin(int x){
    bitset<64>binary(x);
    string bn = binary.to_string(); int fd = bn.find('1'); bn = bn.substr(fd, bn.size()-fd);
    cout<<bn<<"\n";
}
int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n;
    cin>>n;
    vector<int>d(n);
    for(int i=0; i<n; i++) cin>>d[i];
    for_each(d.begin(), d.end(), bin);
}