#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    int n;
    set<int>st;
    while(ss>>n) st.insert(n);
    cout<<st.size();
}