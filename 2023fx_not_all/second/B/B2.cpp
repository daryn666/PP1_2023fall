#include <bits/stdc++.h>
using namespace std;
int main(){
    int d[9];
    for(int i=0; i<9; i++) cin>>d[i];
    for(int i=0; i<4; i++){
        if(d[i] != d[9-1-i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}