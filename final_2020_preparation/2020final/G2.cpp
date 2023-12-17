#include <bits/stdc++.h>
using namespace std;
#define pb push_back
bool ispr(int x){
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    for(int i=2; i<=n/2; i++){
        if(ispr(i) && ispr(n-i)){
            cout<<i<<" "<<n-i;
            return 0;
        }
    }
    //if n is prime that can't be decomposed
    cout<<0<<" "<<n;
}