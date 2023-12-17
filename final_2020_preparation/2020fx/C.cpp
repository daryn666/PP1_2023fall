#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=min(n, 9); i++){
        for(int j=0; j<min(n, 10); j++){
            if(n-i-j >=0 && n-i-j <10){
                cout<<i<<j<<n-i-j<<"\n";
            }
        }
    }
}