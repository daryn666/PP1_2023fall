#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin>>n;
    map<int, bool>d;
    while(n--){
        cin>>x;
        cout<<(d[x]?"YES":"NO")<<"\n";
        d[x]=true;
    }
}
// my test case:
// Input:
// 1 4 1 2 1 4
// Output:
// NO
// NO
// YES
// NO
// YES
// YES