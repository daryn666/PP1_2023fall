#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n, size=0;
    cin>>n;
    if(n%2==0) size = n*(n/2)+n/2;
    else size = n*(n/2+1);
    vector<int>progression(size);
    for(int i=1; i<=n; i++){
        int start=0;
        if((i-1)%2==0) start=(i-1)*((i-1)/2)+(i-1)/2;
        else start=(i-1)*((i-1)/2+1);
        fill(progression.begin()+start, progression.begin()+i+start, i);
    }
    for(int i:progression) cout<<i<<" ";
}
// 1 1
// 2 3 2*1+1
// 3 6 3*2
// 4 10 4*2+2
// 5 15 5*3
// 6 21 6*3+3
// 7 28 7*4
// 8 36 8*4+4
// 9 45 9*5
// 10 55 10*5+5
// 11 66 11*6