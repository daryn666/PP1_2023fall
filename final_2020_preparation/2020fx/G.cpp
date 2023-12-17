#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, tp;
    cin >> n >> m;
    int d[n], mx=0, mn=101, id=1;
    for(int i = 0; i < n; i++){
        int c = 0;
        for(int j = 0; j < m; j++){
            cin >> tp;
            if(tp > 0) c++;
        }
        if(mx < c){
            mx = c;
            id = i+1;
        }
        if(mn > c) mn = c;
    }
    if(mx == mn) cout << "Numbers are equal";
    else cout << id;
}
