#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        reverse(s1.begin(), s1.end()); 
        reverse(s2.begin(), s2.end());
        int a = stoi(s1), b = stoi(s2);
        s1 = to_string(a+b);
        reverse(s1.begin(), s1.end());
        a = stoi(s1);
        cout<<a<<"\n";
    }
}