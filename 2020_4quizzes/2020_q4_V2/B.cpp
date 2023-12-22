#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    int sz = log10(n)+1;
    set<int>st;
    while(n){
        st.insert(n%10); n/=10;
    }
    return st.size()==sz;
}
int main(){
    int a, b;
    cin>>a>>b;
    for(; a<=b; a++){
        if(check(a)){
            cout<<a;
            return 0;
        }
    }
    cout<<"Understandable, have a great day";
}