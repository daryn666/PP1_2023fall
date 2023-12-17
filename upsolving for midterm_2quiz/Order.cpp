#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int d[n];
    for(int i=0; i<n; i++)cin>>d[i];
    for(int i=0; i<n; i++){
        if(d[i]%2==0) cout<<d[i]<<" ";
    }
    for(int i=0; i<n; i++){
        if(d[i]%2==1) cout<<d[i]<<" ";
    }
}