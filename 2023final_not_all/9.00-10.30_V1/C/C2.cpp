#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, r, x;
    cin>>l>>r;
    set<int>st;
    for(int i=l; i<=r; i++) st.insert(i);
    // or for(; l<=r; l++) st.insert(l);
    while(cin>>x){
        st.erase(x);
        if(cin.get()=='\n') break;
    }
    for(set<int>::iterator it=st.begin(); it!=st.end(); it++){
        cout<<*it<<" ";
    }
}