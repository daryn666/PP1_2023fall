#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, r;
    cin >> l >> r;
    for(; l<=r; l++){
        if(l%7==1 || l%7==2 || l%7==5) cout << l <<" ";
    }
}