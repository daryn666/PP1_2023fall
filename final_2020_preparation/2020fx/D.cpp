#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tp1, tp2;
    cin>>n;
    int d[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>d[i][j];
        }
    }
    int res[n][n];
    for(int j=0; j<n; j++){
        for(int i=n-1; i>=0; i--){
            res[j][abs(n-1-i)] = d[i][j];
        }
    }//2:0 1:1 0:2
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout<<res[i][j]<<" ";
        cout<<"\n";
    }
}