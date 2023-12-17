#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tp, x;
    cin >> n;
    stack<int>st;
    for(int i = 0; i < n; i++){
        cin >> tp;
        while(!st.empty() && tp>=st.top() ) st.pop();
        st.push(tp);
    }
    cout<<st.size();
}