#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n, m, k; cin>>n>>m>>k;
    if(k>0){
        for(int i=n; i<=m; i++){
            if(floor(sqrt(i))*floor(sqrt(i)) == i) cout<<i<<" ";
        }
    }
    else{
        for(int i=m; i>=n; i--){
            if(floor(sqrt(i))*floor(sqrt(i)) == i) cout<<i<<" ";
        }
    }
}