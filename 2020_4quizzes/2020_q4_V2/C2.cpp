#include <bits/stdc++.h>
using namespace std;
const int mx = 10e4; //since 1<=n<=100
bool check(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false; 
    }
    return n>1;
}
int main(){
    int n, prime=0, sup=0;
    cin>>n;
    for(int i=2; i<mx; i++){
        if(check(i)){
            prime++;
            if(check(prime)) sup++;
            if(sup==n){
                cout<<i;
                return 0;
            }
        }
    }
}