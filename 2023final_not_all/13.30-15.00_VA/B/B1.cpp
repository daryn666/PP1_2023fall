#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d[n];
    for(int i=0; i<n; i++) cin>>d[i];
    for(int i=0; i<n; i++){
        if(count(d, d+n, d[i])==1){
            cout<<d[i];
            return 0;
        }
    }
}