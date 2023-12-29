#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int>st;
    int d[n];
    for(int i = 0; i < n; i++){
        cin >> d[i];
        if(i > 0) st.insert(d[i]+d[i-1]);
    }
    cout << st.size();
}