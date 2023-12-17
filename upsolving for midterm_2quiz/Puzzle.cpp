#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int d[n];
    for(int i=0; i<n; i++){
        int mx, tp;
        for(int j=0; j<n; j++){
            cin>>tp;
            if(j==0) mx=tp;
            else if(tp>mx) mx=tp;
        }
        d[i] = mx;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout<<d[i]<<" ";
        cout<<"\n";
    }
}