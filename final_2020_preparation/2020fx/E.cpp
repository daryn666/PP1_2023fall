#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tp1, tp2;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==(n-j+1)) cout<<i;
            else cout<<'.';
        }
        cout<<"\n";
    }
}