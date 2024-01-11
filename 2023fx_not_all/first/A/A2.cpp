#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin>>n;
    set<int>st;
    for(int i=0; i<=n; i++) st.insert(i);
    while(n--){
        cin>>x;
        st.erase(x);
    }
    cout<< *st.begin();
}

