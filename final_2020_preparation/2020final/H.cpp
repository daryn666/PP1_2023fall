#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    char a[26][26];
    for(int i=0; i<26; i++){
        for(int j=0; j<26; j++) a[i][j] = (97 + (j+i+26)%26);
    }
    string s1, s2, res="";
    cin >> s1 >> s2;
    for(int i=0, j=0; i<s1.size(); i++, j++){
        if(j==s2.size()) j=0;
        res += a[s1[i]-'a'][s2[j]-'a'];
    }
    cout<<res;
}