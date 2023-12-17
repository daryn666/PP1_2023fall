#include <iostream>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    // maybe cin>>m>>n;
    bool d[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)d[i][j] = false;
    }
    int k, sum=0; cin>>k;
    while(k--){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        for(int i=x1; i<x2; i++){
            for(int j=y1; j<y2; j++){
                if(!d[i][j]){
                    d[i][j]=true; sum++;
                }
            }
        }
    }
    cout<<n*m-sum;
}