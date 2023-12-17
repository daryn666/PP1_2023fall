#include <iostream>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    int d[n], sum, tp;
    for(int i=0; i<n; i++){
        sum=0;
        for(int j=0; j<m; j++){
            cin>>tp; sum+=tp;
        }
        d[i] = sum/m;
    }
    for(int i=0; i<n; i++)cout<<d[i]<<" ";
}