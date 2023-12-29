#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    set<int>st;
    while(cin>>n){
        st.insert(n);
        if(cin.get()=='\n') break;
    }
    cout<<st.size();
}