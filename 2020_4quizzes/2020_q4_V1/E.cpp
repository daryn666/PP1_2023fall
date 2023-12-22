#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    int sz = log10(n)+1;
    set<int>st;
    while(n){
        st.insert(n%10);
        n/=10;
    }
    return st.size()==sz;
}
int main(){
    int n;
    cin>>n;
    n++;
    for(; ; n++){
        if(check(n)){
            cout<<n;
            return 0;
        }
    }
}