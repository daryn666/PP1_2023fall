#include <iostream>
using namespace std;
int main(){
    int n, m, tp; cin>>n>>m; 
    int d[101] = {false};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>tp; d[tp]=true;
        }
    }
    int k; cin>>k; bool res=false;
    for(int i=k+1; i<101; i++){
        if(d[i]){
            res=true; break;
        }
    }
    cout<<(res?"Penalty!":"No penalty for today.");
}