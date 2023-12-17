#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.size() != s2.size()){
        cout << "Understandable have a nice day";
        return 0;
    }
    for(int i = 0; i < s1.size(); i++){
        string copy = s1; 
        rotate(copy.rbegin(), copy.rbegin()+i, copy.rend());
        if(copy == s2){
            cout << i;
            return 0;
        }
    }
    cout << "Understandable have a nice day";
}