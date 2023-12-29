#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<string>st;
    string s;
    while(n--){
        cin >> s;
        bool a, b, c;
        a = any_of(s.begin(), s.end(), ::islower);
        b = any_of(s.begin(), s.end(), ::isupper);
        c = any_of(s.begin(), s.end(), ::isdigit);
        if(a&&b&&c) st.insert(s);
    }
    for(set<string>::iterator i = st.begin(); i != st.end(); i++) cout << *i <<"\n";
}