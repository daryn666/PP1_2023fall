
#include <iostream>
using namespace std;
int main(){
    int n, m, tp, mx=0; 
    cin>>n>>m; 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>tp; 
            if(mx<tp)mx=tp;
        }
    }
    int k; cin>>k;
    cout<<(mx>k?"Penalty!":"No penalty for today.");
}