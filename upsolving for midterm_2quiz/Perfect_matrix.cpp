#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int d[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)cin>>d[i][j];
    }
    bool res=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(d[i][j]!=d[j][i]){
                res=false;
                break;
            }
        }
    }
    cout<<(res?"Perfect.":"Not perfect.");
}