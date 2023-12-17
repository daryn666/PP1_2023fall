#include <iostream>
using namespace std;
int main(){
    long long n, m, t=0, a, b; cin>>a>>b; n=a; m=b;
    if(n>m){
        while(n%2==0 && n>m){
            n/=2; t++;
        }
    }
    else{
        while(m%2==0 && m>n){
            m/=2; t++;
        }
    }
    if(m!=n || t>60) cout<<"NO";
    else if(a<=b) cout<<"YES "<<t;
    else cout<<"YES -"<<t;
}